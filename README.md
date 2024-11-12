# In progress
# ubuntu_22_usb_camera_qt5_gstreamer
Display USB camera on ubuntu22 with Qt <br>
OS: Ubuntu 22.04.3 <br>
Qt Creator 4.11.1, Qt 5.14.1, GCC 5.3.1 <br>
<br>
There are 2 way to use: <br>
(1) overlay <br>
(2) QVideoWidget <br> 
From QT5.12.2, there is a quick call. <br>
QMediaplayer->setMedia(QUrl("gst-pipeline: videotestsrc !  videoconvert ! xvimagesink name=\\\"qtvideosink\\\"")); <br>
<br>
#Just run executable file
sudo apt-get update <br>
sudo apt-get install libqt5widgets5 <br>
sudo apt install libqt5multimedia5 libqt5multimediawidgets5 <br>
sudo apt-get install libqt5multimedia5-plugins <br>


#Compile the source code
sudo apt-get update <br>
sudo apt-get upgrade -y <br>
sudo apt-get install build-essential <br>
sudo apt-get install libfontconfig1 <br>
sudo apt-get install mesa-common-dev <br>
sudo apt-get install libglu1-mesa-dev <br>
sudo apt-get install libx11-dev libxext-dev libxtst-dev <br>

download and install qt-opensource-linux-x64-5.14.2.run <br>
sudo apt install gstreamer1.0-plugins-* <br>
sudo apt install libgstreamer1.0-dev
