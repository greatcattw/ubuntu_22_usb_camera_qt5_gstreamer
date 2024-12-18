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
Overlay and USB camera <br>
![pic](pic/1.png)<br>
<br>
QVideoWidget and videotestsrc <br>
![pic](pic/2.png)<br>
<br>
QVideoWidget and USB camera <br>
![pic](pic/3.png)<br>
<br>
# Just run executable file
sudo apt-get update <br>
sudo apt-get install libqt5widgets5 <br>
sudo apt-get install libqt5multimedia5 libqt5multimediawidgets5 <br>
sudo apt-get install libqt5multimedia5-plugins <br>


# Compile the source code
sudo apt-get update <br>
<br>
sudo apt-get install build-essential <br>
sudo apt-get install libfontconfig1 <br>
sudo apt-get install mesa-common-dev <br>
sudo apt-get install libglu1-mesa-dev <br>
sudo apt-get install libx11-dev libxext-dev libxtst-dev <br>
<br>
download and install qt-opensource-linux-x64-5.14.2.run <br>
<br>
sudo apt-get install libqt5widgets5 <br>
sudo apt-get install libqt5multimedia5 libqt5multimediawidgets5 <br>
sudo apt-get install libqt5multimedia5-plugins <br>
<br>
sudo apt-get install libqt5gstreamer-dev <br>
<br>

# Note 1 : Install driver
ASUS S501MER  RTX5060 NVIDIA <br>
OS: Ubuntu 22.04.3 <br>
sudo apt-get update <br>
sudo apt-get install libc-dev -y <br>
sudo apt-get install linux-headers-$(uname -r) -y <br>
sudo apt-get install ubuntu-drivers-common -y <br>
sudo apt-get install nvidia-driver-550 -y <br>

# Note 2 : Install Full gstreamer 
sudo apt-get -y install \ <br>
libgstreamer1.0-dev \ <br>
libgstreamer-plugins-base1.0-dev \ <br>
libgstreamer-plugins-bad1.0-dev \ <br>
gstreamer1.0-plugins-base \ <br>
gstreamer1.0-plugins-good \ <br>
gstreamer1.0-plugins-bad \ <br>
gstreamer1.0-plugins-ugly \ <br>
gstreamer1.0-libav \ <br>
gstreamer1.0-tools \ <br>
gstreamer1.0-x \ <br>
gstreamer1.0-alsa \ <br>
gstreamer1.0-gl \ <br>
gstreamer1.0-gtk3 \ <br>
gstreamer1.0-qt5 \ <br>
gstreamer1.0-pulseaudio  <br>
