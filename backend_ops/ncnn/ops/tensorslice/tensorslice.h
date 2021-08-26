#ifndef LAYER_TENSORSLICE_H
#define LAYER_TENSORSLICE_H

#include "layer.h"

namespace mmlab {

class TensorSlice : public ncnn::Layer {
 public:
  TensorSlice();

  virtual int load_param(const ncnn::ParamDict& pd);

  virtual int forward(const ncnn::Mat& bottom_blob, ncnn::Mat& top_blob,
                      const ncnn::Option& opt) const;

 public:
  ncnn::Mat starts;
  ncnn::Mat ends;
  ncnn::Mat axes;
  ncnn::Mat steps;
};

}  // namespace mmlab

#endif  // LAYER_TENSORSLICE_H
