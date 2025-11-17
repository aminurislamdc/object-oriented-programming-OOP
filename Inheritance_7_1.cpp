#include <iostream>

using namespace std;

class MP3Player {
    private:
        string fileName;
        string extension;
    public:
        MP3Player() {
            this->extension = ".mp3";
        }

        MP3Player(string fileName, string extension) {
            this->fileName = fileName;
            this->extension = extension;
        }

        string getFileName() {
            return this->fileName;
        }

        string getExtension() {
            return this->extension;
        }

        void setFileName(string fileName) {
            this->fileName = fileName;
        }

        void setExtension(string extension) {
            this->extension = extension;
        }

        void playAudio() {
            cout << "Audio: " << this->fileName << this->extension << " is playing..."
                 << endl;
        }
};

class MP4Player : private MP3Player {
    private:
        string resolution;

    public:
        MP4Player() {
            setExtension(".mp4");
        }

        MP4Player(string fileName, string extension, string resolution)
                : MP3Player(fileName, extension) {
            this->resolution = resolution;
        }

        void setFile(string fileName) {
            setFileName(fileName);
        }

        void setExt(string extension) {
            setExtension(extension);
        }

        string getResolution() {
            return this->resolution;
        }

        void setResolution(string resolution) {
            this->resolution = resolution;
        }

        void pAudio() {
            playAudio();
        }

        void playVideo() {
            cout << "Video: " << getFileName() << getExtension()
                 << " with resolution: (" << this->resolution << ") is playing..."  << endl;
        }
};

int main() {
    MP3Player spotify;
    spotify.setFileName("Poison");
    spotify.playAudio();

    spotify.setFileName("National Anthem BD");
    spotify.playAudio();

    MP4Player kMPlayer;
    kMPlayer.setResolution("1080X640P");
    kMPlayer.setFile("BD vs WI Live");
    kMPlayer.playVideo();
    kMPlayer.setFile("Sorry Sorry");
    kMPlayer.setExt(".mp3");
    kMPlayer.pAudio();
    return 0;
}