
#ifndef EXTERNAL_IMAGE_H_
#define EXTERNAL_IMAGE_H_

#include "image.h"

// this is the texture to be used with an external renderer
// the data field can be used to pass data between the sxrf application
// and the external renderer

namespace sxr {

class ExternalImage : public Image
{
public:
    ExternalImage() : Image(Image::ImageType::NONE, 0), mData(0)
    { }
    virtual ~ExternalImage() {}

    virtual void setData(long data)
    {
        mData = data;
    }

    virtual long getData() const
    {
        return mData;
    }

private:
    ExternalImage(const ExternalImage& render_texture) = delete;
    ExternalImage(ExternalImage&& render_texture) = delete;
    ExternalImage& operator=(const ExternalImage& render_texture) = delete;
    ExternalImage& operator=(ExternalImage&& render_texture) = delete;

private:
    long mData;
};

}
#endif
