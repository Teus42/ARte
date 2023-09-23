using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


public class ArInteract : MonoBehaviour
{
    private GameObject objectToPlace;
    public GameObject placementIndicator;
    private ARSessionOrigin arOrigin;
    private ARRaycastManager raycastManager;
    private Pose placementPose;    
    private bool placementPoseIsValid = false;
    private Texture2D _imgTexture;   
    public GameObject _video;
    void Start()
    {
        arOrigin = FindObjectOfType<ARSessionOrigin>();
        raycastManager = FindObjectOfType<ARRaycastManager>();          
    }    
    void Update()
    {
        UpdatePlacementPose();
        UpdatePlacementIndicator();                                      
    }

    public void PlaceObject()
    {        
        Instantiate(objectToPlace, placementPose.position, placementPose.rotation);                                      
    }
    
    private void UpdatePlacementIndicator()
    {
        if(placementPoseIsValid)
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
        }
        else
        {
            placementIndicator.SetActive(false);
        }
    }

    private void UpdatePlacementPose()
    {
        var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f,0.5f));
        var hits = new List<ARRaycastHit>();
        raycastManager.Raycast(screenCenter,hits,TrackableType.Planes);
        

        placementPoseIsValid = hits.Count > 0;
        if(placementPoseIsValid)
        {
            placementPose = hits[0].pose;

            var cameraForward = Camera.current.transform.forward;
            var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
            placementPose.rotation = Quaternion.LookRotation(cameraBearing);        
        }
    }

    public void ArteSelecionada(string nome)
    {
        objectToPlace = (GameObject)Resources.Load(nome, typeof (GameObject));
    }

    public void LimparTela()
    {
        GameObject[] listarArtes;
        listarArtes = GameObject.FindGameObjectsWithTag("Arte"); 

        foreach (GameObject obj in listarArtes)
        {
            Destroy(obj);
        }
        
    }

    public Material _material;
    
    public void PegarImagem()
    {
       PickImage(1024);
       objectToPlace = (GameObject)Resources.Load("Galeria", typeof (GameObject));
    }

    public void PegarVideo()
    {
        PickVideo();
        objectToPlace = (GameObject)Resources.Load("Video", typeof (GameObject));
    }

    private void PickImage( int maxSize )
    {
        NativeGallery.Permission permission = NativeGallery.GetImageFromGallery( ( path ) =>
        {
            Debug.Log( "Image path: " + path );
            if( path != null )
            {
                // Create Texture from selected image
                _imgTexture = NativeGallery.LoadImageAtPath( path, maxSize );
                if( _imgTexture == null )
                {
                    Debug.Log( "Couldn't load texture from " + path );
                    return;
                }                
               
                if( !_material.shader.isSupported ) // happens when Standard shader is not included in the build
                    _material.shader = Shader.Find( "Legacy Shaders/Diffuse" );

               
                _material.mainTexture = _imgTexture;                                 
            }
        }, "Selecione uma imagem", "image/*" );

        Debug.Log( "Permission result: " + permission );
    }

    public void AlterarTamanho()
    {       
        Vector3 newScale = new Vector3(0.1250001f,_imgTexture.width/(float)_imgTexture.height,1f); 
        if(objectToPlace.name == "Galeria")
        {
            GameObject.Find("Galeria(Clone)").transform.GetChild(0).localScale = newScale;
        }
    }

    private void PickVideo()
    {
        NativeGallery.Permission permission = NativeGallery.GetVideoFromGallery( ( path ) =>
        {        
           if(path != null)
           {                 
                _video.transform.GetChild(0).GetComponent<VideoPlayer>().url = "file://"+path;               
           }
        }, "Escolha um video" );

        Debug.Log( "Permission result: " + permission );
    }
}
