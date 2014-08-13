#ifndef IMAGEMANIPULATOR_H
#define IMAGEMANIPULATOR_H

class ImageManipulator{
    public:
        // apply gray scale to the file who has been read before.
        void toGrayScale();
        // save the result file to the disk with the selected file name and extension.
        bool saveToFile(string fileName,int extension);
        // try to read a file from disk with the provided file name and extension
        bool readFromFile(string fileName,int extension);
    private:

};


#endif // IMAGEMANIPULATOR_H
