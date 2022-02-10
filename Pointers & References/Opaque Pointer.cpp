class CImage
{
public:
    CImage();
    ~CImage();
    struct SImageInfo* pImageInfo;
    void Rotate(double angle);
    void Scale(double scaleFactorX, 
               double scaleFactorY);
    void Move(int toX, int toY);    
private:
    void InitImageInfo();
};

//This category of pointers point to a data structure whose contents are not exposed at the time of its definition.
