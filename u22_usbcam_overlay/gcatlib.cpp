#include <gst/video/videooverlay.h>
#include "gcatlib.h"

void link_camera_to_winId(QString dev_name , WId wid1){

    GstElement *pipeline, *source, *capsfilter, *jpegdec, *videoconvert, *sink;

    //QString dev_name="/dev/video0";
    QByteArray qbary=dev_name.toLocal8Bit();
    char *camera_name= qbary.data();

    // Initialize GStreamer
    gst_init(nullptr, nullptr);

    pipeline = gst_pipeline_new("camera-pipeline");
    source = gst_element_factory_make("v4l2src", "source");
    capsfilter = gst_element_factory_make("capsfilter", "capsfilter");
    jpegdec = gst_element_factory_make("jpegdec", "jpegdec");
    videoconvert = gst_element_factory_make("videoconvert", "convert");
    sink = gst_element_factory_make("ximagesink", "sink");


    g_object_set(source, "device", camera_name, NULL);
    GstCaps *caps = gst_caps_new_simple(//"video/x-raw","format",G_TYPE_STRING,"YUY2",
                        "image/jpeg", "format",G_TYPE_STRING,"MJPG",
                                         "width", G_TYPE_INT, 640,
                                         "height", G_TYPE_INT, 480,
                                         "framerate", GST_TYPE_FRACTION,30,1,
                                         NULL);
    g_object_set(capsfilter, "caps", caps, NULL);
    gst_caps_unref(caps);

    gst_bin_add_many(GST_BIN(pipeline), source, capsfilter, jpegdec, videoconvert, sink, NULL);
    gst_element_link_many(source, capsfilter, jpegdec, videoconvert, sink, NULL);


    gst_video_overlay_set_window_handle(GST_VIDEO_OVERLAY(sink), wid1);

    // Start playing the pipeline
    gst_element_set_state(pipeline, GST_STATE_PLAYING);

}
