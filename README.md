

# LiteHub 🚀🚀🌟  

<div align='center'>
  <img src='logs/test_lite_yolov5_1.jpg' height="200px" width="200px">
  <img src='logs/test_lite_deeplabv3_resnet101.jpg' height="200px" width="200px">
  <img src='logs/test_lite_ssd_mobilenetv1.jpg' height="200px" width="200px">
  <img src='logs/test_lite_ultraface.jpg' height="200px" width="200px">
  <br> 
  <img src='logs/test_lite_pfld.jpg' height="200px" width="200px">
  <img src='logs/test_lite_fsanet.jpg' height="200px" width="200px">
  <img src='logs/test_lite_fast_style_transfer_candy.jpg' height="200px" width="200px">
  <img src='logs/test_lite_fast_style_transfer_mosaic.jpg' height="200px" width="200px"> 
</div>

*LiteHub* for onnxruntime/ncnn/mnn. This library integrates some interesting models and implement with onnxruntime/ncnn/mnn. Such as `YoloV5`、`YoloV4`、`DeepLabV3`、`UltraFace`、`PFLD`、`Colorization`、`FastStyleTransfer` and so on. Most of the models come from `ONNX-Model-Zoo`, `PytorchHub` and `other open source projects`. All models used will be cited. Many thanks to these contributors. What you see is what you get, and hopefully you get something out of it.

## 1. Dependencies.  
* Mac OS.  
install `OpenCV` and `onnxruntime` libraries using Homebrew or you can download the built dependencies from this repo. See [third_party](https://github.com/DefTruth/litehub/tree/main/third_party) and build-docs[<sup>1</sup>](#refer-anchor-1) for more details.

```shell
  brew update
  brew install opencv
  brew install onnxruntime
```

* Linux & Windows. (`TODO`)
* Inference Engine Plans:
  * Doing:
    * [x] `onnxruntime` 
  * TODO:
    * `NCNN`
    * `MNN`
    * `OpenMP` 


## 2. Model Zoo.

### 2.1 model-zoo for ONNX version.
Some of the models were converted by this repo, and others were referenced from third-party libraries. (code:g83e)

<div id="refer-anchor-2"></div>

|Model|Size|Download|From|Type|Usage|
|:---:|:---:|:---:|:---:|:---:|:---:|
|[YoloV5](https://github.com/ultralytics/yolov5)|28Mb~335Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ)| [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_yolov5.zh.md) | *lite::cv::detectiion* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_yolov5.cpp) |
|[YoloV3](https://github.com/onnx/models/blob/master/vision/object_detection_segmentation/yolov3)|236Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ)| - | *lite::cv::detectiion* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_yolov3.cpp) |
|[TinyYoloV3](https://github.com/onnx/models/blob/master/vision/object_detection_segmentation/tiny-yolov3)|33Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ)| - | *lite::cv::detectiion* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_tiny_yolov3.cpp) |
|[YoloV4](https://github.com/argusswift/YOLOv4-pytorch)|176Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_yolov4.zh.md) | *lite::cv::detectiion* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_tiny_yolov4.cpp) |
|[SSD](https://github.com/onnx/models/blob/master/vision/object_detection_segmentation/ssd)|76Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::detectiion* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_ssd.cpp) |
|[SSDMobileNetV1](https://github.com/onnx/models/blob/master/vision/object_detection_segmentation/ssd-mobilenetv1)|27Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::detectiion* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_ssd_mobilenetv1.cpp) |
|[EfficientNet-Lite4](https://github.com/onnx/models/blob/master/vision/classification/efficientnet-lite4)|49Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::classification* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_efficientnet_lite4.cpp) |
|[ShuffleNetV2](https://github.com/onnx/models/blob/master/vision/classification/shufflenet)|8.7Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::classification* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_shufflenetv2.cpp) |
|[FSANet](https://github.com/omasaht/headpose-fsanet-pytorch)|1.2Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::face* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_fsanet.cpp) |
|[PFLD](https://github.com/Hsintao/pfld_106_face_landmarks)|1.0Mb~5.5Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::face* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_pfld.cpp) |
|[UltraFace](https://github.com/Linzaer/Ultra-Light-Fast-Generic-Face-Detector-1MB)|1.1Mb~1.5Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::face* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_ultraface.cpp) |
|[AgeGoogleNet](https://github.com/onnx/models/tree/master/vision/body_analysis/age_gender)|23Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::face* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_age_googlenet.cpp) |
|[GenderGoogleNet](https://github.com/onnx/models/tree/master/vision/body_analysis/age_gender)|23Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::face* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_gender_googlenet.cpp) |
|[EmotionFerPlus](https://github.com/onnx/models/blob/master/vision/body_analysis/emotion_ferplus)|33Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::face* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_emotion_ferplus.cpp) |
|[VGG16Age](https://github.com/onnx/models/tree/master/vision/body_analysis/age_gender)|514Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::face* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_vgg16_age.cpp) |
|[VGG16Gender](https://github.com/onnx/models/tree/master/vision/body_analysis/age_gender)|512Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::face* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_vgg16_gender.cpp) |
|[SSRNet](https://github.com/oukohou/SSR_Net_Pytorch)|190Kb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_ssrnet.zh.md) | *lite::cv::face* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_ssrnet.cpp) |
|[FastStyleTransfer](https://github.com/onnx/models/blob/master/vision/style_transfer/fast_neural_style)|6.4Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::style* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_fast_style_transfer.cpp) |
|[ArcFaceResNet](https://github.com/onnx/models/blob/master/vision/body_analysis/arcface)|249Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | - | *lite::cv::faceid* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_arcface_resnet.cpp) |
|[Colorizer](https://github.com/richzhang/colorization)|123Mb~130Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_colorizer.zh.md) | *lite::cv::colorization* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_colorizer.cpp) |
|[SubPixelCNN](https://github.com/niazwazir/SUB_PIXEL_CNN)|234Kb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_subpixel_cnn.zh.md) | *lite::cv::resolution* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_subpixel_cnn.cpp) |
|[DeepLabV3ResNet101](https://pytorch.org/hub/pytorch_vision_deeplabv3_resnet101/)|232Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_deeplabv3_resnet101.zh.md) | *lite::cv::segmentation* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_deeplabv3_resnet101.cpp) |
|[DenseNet121](https://pytorch.org/hub/pytorch_vision_densenet/)|30.7Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_densenet121.zh.md) | *lite::cv::classification* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_densenet.cpp) |
|[FCNResNet101](https://pytorch.org/hub/pytorch_vision_fcn_resnet101/)|207Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_fcn_resnet101.zh.md) | *lite::cv::segmentation* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_fcn_resnet101.cpp) |
|[GhostNet](https://pytorch.org/hub/pytorch_vision_ghostnet/)|20Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_ghostnet.zh.md) | *lite::cv::classification* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_ghostnet.cpp) |
|[HdrDNet](https://pytorch.org/hub/pytorch_vision_hardnet//)|13Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_hardnet.zh.md) | *lite::cv::classification* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_hardnet.cpp) |
|[IBNNet](https://pytorch.org/hub/pytorch_vision_ibnnet/)|97Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_ibnnet.zh.md) | *lite::cv::classification* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_ibnnet.cpp) |
|[MobileNetV2](https://pytorch.org/hub/pytorch_vision_mobilenet_v2/)|13Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_mobilenetv2.zh.md) | *lite::cv::classification* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_mobilenetv2.cpp) |
|[ResNet](https://pytorch.org/hub/pytorch_vision_resnet/)|44Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_resnet.zh.md) | *lite::cv::classification* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_resnet.cpp) |
|[ResNeXt](https://pytorch.org/hub/pytorch_vision_resnext/)|95Mb|[Baidu Drive](https://pan.baidu.com/s/1X5y7bOSPyeBzT9nSgQiMIQ) | [litehub](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_resnext.zh.md) | *lite::cv::classification* | [demo](https://github.com/DefTruth/litehub/blob/main/examples/lite/cv/test_lite_resnext.cpp) |

## 3. Build LiteHub.
* Build the shared lib of LiteHub for MacOS from sources or you can download the built lib from [liblitehub.dylib|so](https://github.com/DefTruth/litehub/tree/main/build/litehub/lib) (`TODO: Linux & Windows`). Note that LiteHub uses `onnxruntime` as default backend, for the reason that onnxruntime supports the most of onnx's operators. For Linux and Windows, you need to build the shared libs of `OpenCV` and `onnxruntime` firstly and put then into the `third_party` directory. Please reference the build-docs[<sup>1</sup>](#refer-anchor-1) for `third_party`.
```shell
git clone --depth=1 https://github.com/DefTruth/litehub.git
```
```shell
cd litehub
sh ./build.sh
```
```shell
cd ./build/litehub/lib && otool -L liblitehub.dylib 
liblitehub.dylib:
        @rpath/liblitehub.dylib (compatibility version 0.0.0, current version 0.0.0)
        @rpath/libopencv_highgui.4.5.dylib (compatibility version 4.5.0, current version 4.5.2)
        @rpath/libonnxruntime.1.7.0.dylib (compatibility version 0.0.0, current version 1.7.0)
        ...
```
```shell
cd ../ && tree .
├── bin
├── include
│   ├── lite
│   │   ├── backend.h
│   │   ├── config.h
│   │   └── lite.h
│   └── ort
└── lib
    └── liblitehub.dylib
```
* Run the built examples:
```shell
cd ./build/litehub/bin && ls -lh | grep lite
-rwxr-xr-x  1 root  staff   3.4M Jun 26 23:10 liblitehub.dylib
...
-rwxr-xr-x  1 root  staff   196K Jun 26 23:10 lite_yolov4
-rwxr-xr-x  1 root  staff   196K Jun 26 23:10 lite_yolov5
...
```

```shell
./lite_yolov5
LITEORT_DEBUG LogId: ../../../hub/onnx/cv/yolov5s.onnx
=============== Input-Dims ==============
...
detected num_anchors: 25200
generate_bboxes num: 66
Default Version Detected Boxes Num: 5
```

* Link `litehub` shared lib. You need to make sure that `OpenCV` and `onnxruntime` are linked correctly. Just like:

```cmake
# link opencv.
set(OpenCV_DIR ${THIRDPARTY_DIR}/opencv/4.5.2/x86_64/lib/cmake/opencv4)
find_package(OpenCV 4 REQUIRED)
# link onnxruntime.
set(ONNXRUNTIME_DIR ${THIRDPARTY_DIR}/onnxruntime/1.7.0/x86_64)
set(ONNXRUNTIME_INCLUDE_DIR ${ONNXRUNTIME_DIR}/include)
set(ONNXRUNTIME_LIBRARY_DIR ${ONNXRUNTIME_DIR}/lib)
include_directories(${ONNXRUNTIME_INCLUDE_DIR})
link_directories(${ONNXRUNTIME_LIBRARY_DIR})
# link litehub.
set(LITEHUB_DIR ${THIRDPARTY_DIR}/litehub)
set(LITEHUB_INCLUDE_DIR ${LITEHUB_DIR}/include)
set(LITEHUB_LIBRARY_DIR ${LITEHUB_DIR}/lib)
include_directories(${LITEHUB_INCLUDE_DIR})
link_directories(${LITEHUB_LIBRARY_DIR})
# add your executable
add_executable(executable_name test_executable_name.cpp)
target_link_libraries(executable_name litehub)  # link litehub
```

## 4. Examples for LiteHub.

More examples can be found at [lite-examples](https://github.com/DefTruth/litehub/tree/main/examples/lite/cv).  Note that the default backend for LiteHub is `onnxruntime`, for the reason that onnxruntime supports the most of onnx's operators.
#### 4.1 Object Detection using [YoloV5](https://github.com/ultralytics/yolov5). Download model from Model-Zoo[<sup>2</sup>](#refer-anchor-2).
```c++
#include "lite/lite.h"

static void test_default()
{
  std::string onnx_path = "../../../hub/onnx/cv/yolov5s.onnx";
  std::string test_img_path = "../../../examples/lite/resources/test_lite_yolov5_1.jpg";
  std::string save_img_path = "../../../logs/test_lite_yolov5_1.jpg";
  
  lite::cv::detection::YoloV5 *yolov5 = new lite::cv::detection::YoloV5(onnx_path); 
  std::vector<lite::cv::types::Boxf> detected_boxes;
  cv::Mat img_bgr = cv::imread(test_img_path);
  yolov5->detect(img_bgr, detected_boxes);
  
  lite::cv::utils::draw_boxes_inplace(img_bgr, detected_boxes);
  cv::imwrite(save_img_path, img_bgr);  
  
  delete yolov5;
}
```

The output is:
<div align='center'>
  <img src='logs/test_lite_yolov5_1.jpg' height="256px">
  <img src='logs/test_lite_yolov5_2.jpg' height="256px">
</div>  

#### 4.2 Segmentation using [DeepLabV3ResNet101](https://pytorch.org/hub/pytorch_vision_deeplabv3_resnet101/). Download model from Model-Zoo[<sup>2</sup>](#refer-anchor-2).
```c++
#include "lite/lite.h"

static void test_default()
{
  std::string onnx_path = "../../../hub/onnx/cv/deeplabv3_resnet101_coco.onnx";
  std::string test_img_path = "../../../examples/lite/resources/test_lite_deeplabv3_resnet101.png";
  std::string save_img_path = "../../../logs/test_lite_deeplabv3_resnet101.jpg";

  lite::cv::segmentation::DeepLabV3ResNet101 *deeplabv3_resnet101 =
      new lite::cv::segmentation::DeepLabV3ResNet101(onnx_path, 16); // 16 threads

  lite::cv::types::SegmentContent content;
  cv::Mat img_bgr = cv::imread(test_img_path);
  deeplabv3_resnet101->detect(img_bgr, content);

  if (content.flag)
  {
    cv::Mat out_img;
    cv::addWeighted(img_bgr, 0.2, content.color_mat, 0.8, 0., out_img);
    cv::imwrite(save_img_path, out_img);
    if (!content.names_map.empty())
    {
      for (auto it = content.names_map.begin(); it != content.names_map.end(); ++it)
      {
        std::cout << it->first << " Name: " << it->second << std::endl;
      }
    }
  }
  delete deeplabv3_resnet101;
}
```

The output is:
<div align='center'>
  <img src='examples/lite/resources/test_lite_deeplabv3_resnet101.png' height="256px">
  <img src='logs/test_lite_deeplabv3_resnet101.jpg' height="256px">
</div> 

#### 4.3 Style Transfer using [FastStyleTransfer](https://github.com/onnx/models/tree/master/vision/style_transfer/fast_neural_style). Download model from Model-Zoo[<sup>2</sup>](#refer-anchor-2).
```c++
#include "lite/lite.h"

static void test_default()
{
  std::string onnx_path = "../../../hub/onnx/cv/style-candy-8.onnx";
  std::string test_img_path = "../../../examples/lite/resources/test_lite_fast_style_transfer.jpg";
  std::string save_img_path = "../../../logs/test_lite_fast_style_transfer_candy.jpg";
  
  lite::cv::style::FastStyleTransfer *fast_style_transfer =
     new lite::cv::style::FastStyleTransfer(onnx_path);
 
  lite::cv::types::StyleContent style_content;
  cv::Mat img_bgr = cv::imread(test_img_path);
  fast_style_transfer->detect(img_bgr, style_content);

  if (style_content.flag) cv::imwrite(save_img_path, style_content.mat);
  delete fast_style_transfer;
}
```
The output is:

<div align='center'>
  <img src='examples/lite/resources/test_lite_fast_style_transfer.jpg' height="224px">
  <img src='logs/test_lite_fast_style_transfer_candy.jpg' height="224px">
  <img src='logs/test_lite_fast_style_transfer_mosaic.jpg' height="224px">  
  <br> 
  <img src='logs/test_lite_fast_style_transfer_pointilism.jpg' height="224px">
  <img src='logs/test_lite_fast_style_transfer_rain_princes.jpg' height="224px">
  <img src='logs/test_lite_fast_style_transfer_udnie.jpg' height="224px">
</div>


#### 4.4 Colorization using [colorization](https://github.com/richzhang/colorization). Download model from Model-Zoo[<sup>2</sup>](#refer-anchor-2).
```c++
#include "lite/lite.h"

static void test_default()
{
  std::string onnx_path = "../../../hub/onnx/cv/eccv16-colorizer.onnx";
  std::string test_img_path = "../../../examples/lite/resources/test_lite_colorizer_1.jpg";
  std::string save_img_path = "../../../logs/test_lite_eccv16_colorizer_1.jpg";
  
  lite::cv::colorization::Colorizer *colorizer = new lite::cv::colorization::Colorizer(onnx_path);
  
  cv::Mat img_bgr = cv::imread(test_img_path);
  lite::cv::types::ColorizeContent colorize_content;
  colorizer->detect(img_bgr, colorize_content);
  
  if (colorize_content.flag) cv::imwrite(save_img_path, colorize_content.mat);
  delete colorizer;
}
```
The output is:

<div align='center'>
  <img src='examples/lite/resources/test_lite_colorizer_1.jpg' height="224px" width="224px">
  <img src='examples/lite/resources/test_lite_colorizer_2.jpg' height="224px" width="224px">
  <img src='examples/lite/resources/test_lite_colorizer_3.jpg' height="224px" width="224px">  
  <br> 
  <img src='logs/test_lite_siggraph17_colorizer_1.jpg' height="224px" width="224px">
  <img src='logs/test_lite_siggraph17_colorizer_2.jpg' height="224px" width="224px">
  <img src='logs/test_lite_siggraph17_colorizer_3.jpg' height="224px" width="224px">
</div>  


#### 4.5 Facial Landmarks Detection using [PFLD](https://github.com/Hsintao/pfld_106_face_landmarks). Download model from Model-Zoo[<sup>2</sup>](#refer-anchor-2).
```c++
#include "lite/lite.h"

static void test_default()
{
  std::string onnx_path = "../../../hub/onnx/cv/pfld-106-v3.onnx";
  std::string test_img_path = "../../../examples/lite/resources/test_lite_pfld.png";
  std::string save_img_path = "../../../logs/test_lite_pfld.jpg";

  lite::cv::face::PFLD *pfld = new lite::cv::face::PFLD(onnx_path);

  lite::cv::types::Landmarks landmarks;
  cv::Mat img_bgr = cv::imread(test_img_path);
  pfld->detect(img_bgr, landmarks);
  lite::cv::utils::draw_landmarks_inplace(img_bgr, landmarks);
  cv::imwrite(save_img_path, img_bgr);
  
  delete pfld;
}
```
The output is:  
<div align='center'>
  <img src='logs/test_lite_pfld.jpg' height="224px" width="224px">
  <img src='logs/test_lite_pfld_2.jpg' height="224px" width="224px">
  <img src='logs/test_lite_pfld_3.jpg' height="224px" width="224px">
</div>    

#### 4.6 Face Detection using [UltraFace](https://github.com/Linzaer/Ultra-Light-Fast-Generic-Face-Detector-1MB). Download model from Model-Zoo[<sup>2</sup>](#refer-anchor-2).
```c++
#include "lite/lite.h"

static void test_default()
{
  std::string onnx_path = "../../../hub/onnx/cv/ultraface-rfb-640.onnx";
  std::string test_img_path = "../../../examples/lite/resources/test_lite_ultraface.jpg";
  std::string save_img_path = "../../../logs/test_lite_ultraface.jpg";

  lite::cv::face::UltraFace *ultraface = new lite::cv::face::UltraFace(onnx_path);

  std::vector<lite::cv::types::Boxf> detected_boxes;
  cv::Mat img_bgr = cv::imread(test_img_path);
  ultraface->detect(img_bgr, detected_boxes);
  lite::cv::utils::draw_boxes_inplace(img_bgr, detected_boxes);
  cv::imwrite(save_img_path, img_bgr);

  delete ultraface;
}
```
The output is:  
<div align='center'>
  <img src='logs/test_lite_ultraface.jpg' height="224px" width="224px">
  <img src='logs/test_lite_ultraface_2.jpg' height="224px" width="224px">
  <img src='logs/test_lite_ultraface_3.jpg' height="224px" width="224px">
</div>  

#### 4.7 1000 Classes Classification using [DenseNet](https://pytorch.org/hub/pytorch_vision_densenet/). Download model from Model-Zoo[<sup>2</sup>](#refer-anchor-2).
```c++
#include "lite/lite.h"

static void test_default()
{
  std::string onnx_path = "../../../hub/onnx/cv/densenet121.onnx";
  std::string test_img_path = "../../../examples/lite/resources/test_lite_densenet.jpg";

  lite::cv::classification::DenseNet *densenet = new lite::cv::classification::DenseNet(onnx_path);

  lite::cv::types::ImageNetContent content;
  cv::Mat img_bgr = cv::imread(test_img_path);
  densenet->detect(img_bgr, content);
  if (content.flag)
  {
    const unsigned int top_k = content.scores.size();
    if (top_k > 0)
    {
      for (unsigned int i = 0; i < top_k; ++i)
        std::cout << i + 1
                  << ": " << content.labels.at(i)
                  << ": " << content.texts.at(i)
                  << ": " << content.scores.at(i)
                  << std::endl;
    }
  }
  delete densenet;
}
```

The output is:
<div align='center'>
  <img src='examples/lite/resources/test_lite_densenet.jpg' height="224px" width="224px">
  <img src='logs/test_lite_densenet.png' height="224px" width="500px">
</div>  



#### 4.8 HeadPose Estimation using [FSANet](https://github.com/omasaht/headpose-fsanet-pytorch). Download model from Model-Zoo[<sup>2</sup>](#refer-anchor-2).

```c++
#include "lite/lite.h"

static void test_default()
{
  std::string onnx_path = "../../../hub/onnx/cv/fsanet-var.onnx";
  std::string test_img_path = "../../../examples/lite/resources/test_lite_fsanet.jpg";
  std::string save_img_path = "../../../logs/test_lite_fsanet.jpg";

  lite::cv::face::FSANet *fsanet = new lite::cv::face::FSANet(onnx_path);
  cv::Mat img_bgr = cv::imread(test_img_path);
  lite::cv::types::EulerAngles euler_angles;
  fsanet->detect(img_bgr, euler_angles);
  
  if (euler_angles.flag)
  {
    lite::cv::utils::draw_axis_inplace(img_bgr, euler_angles);
    cv::imwrite(save_img_path, img_bgr);
    std::cout << "yaw:" << euler_angles.yaw << " pitch:" << euler_angles.pitch << " row:" << euler_angles.roll << std::endl;
  }
  delete fsanet;
}
```

The output is:
<div align='center'>
  <img src='logs/test_lite_fsanet.jpg' height="224px" width="224px">
  <img src='logs/test_lite_fsanet_2.jpg' height="224px" width="224px">
  <img src='logs/test_lite_fsanet_3.jpg' height="224px" width="224px">
</div>  


## 5. LiteHub API Docs.

### 5.1 Default Version APIs. 

More details of basic types for Default Version APIs can be found at [types](https://github.com/DefTruth/litehub/blob/main/ort/core/ort_types.h) . Note that LiteHub uses `onnxruntime` as default backend, for the reason that onnxruntime supports the most of onnx's operators. `(TODO: Add detailed API documentation)`


> `lite::cv::detection::Yolo5`:  
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes, 
            float score_threshold = 0.25f, float iou_threshold = 0.45f,
            unsigned int topk = 100, unsigned int nms_type = NMS::OFFSET);
```  

> `lite::cv::detection::Yolo4`:  
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes, 
            float score_threshold = 0.25f, float iou_threshold = 0.45f,
            unsigned int topk = 100, unsigned int nms_type = NMS::OFFSET);
```

> `lite::cv::detection::Yolo3`:  
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes);
```

> `lite::cv::detection::TinyYoloV3`:  
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes);
```

> `lite::cv::detection::SSD`:  
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes, 
            float score_threshold = 0.25f, float iou_threshold = 0.45f,
            unsigned int topk = 100, unsigned int nms_type = NMS::OFFSET);
```

> `lite::cv::detection::SSDMobileNetV1`:  
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes, 
            float score_threshold = 0.25f, float iou_threshold = 0.45f,
            unsigned int topk = 100, unsigned int nms_type = NMS::OFFSET);
```

> `lite::cv::face::FSANet`:  
```c++
void detect(const cv::Mat &mat, types::EulerAngles &euler_angles);
```

> `lite::cv::face::UltraFace`:   
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes,
            float score_threshold = 0.7f, float iou_threshold = 0.3f,
            unsigned int topk = 300, unsigned int nms_type = 0);
```

> `lite::cv::face::PFLD`:   
```c++
void detect(const cv::Mat &mat, types::Landmarks &landmarks);
```  

> `lite::cv::face::AgeGoogleNet`:   
```c++
void detect(const cv::Mat &mat, types::Age &age);
```  

> `lite::cv::face::GenderGoogleNet`:   
```c++
void detect(const cv::Mat &mat, types::Gender &gender);
```

> `lite::cv::face::VGG16Age`:   
```c++
void detect(const cv::Mat &mat, types::Age &age);
```

> `lite::cv::face::VGG16Gender`:   
```c++
void detect(const cv::Mat &mat, types::Gender &gender);
```  

> `lite::cv::face::EmotionFerPlus`:   
```c++
void detect(const cv::Mat &mat, types::Emotions &emotions);
```

> `lite::cv::face::SSRNet`:   
```c++
void detect(const cv::Mat &mat, types::Age &age);
```

> `lite::cv::faceid::ArcFaceResNet`:   
```c++
void detect(const cv::Mat &mat, types::FaceContent &face_content);
```  

> `lite::cv::segmentation::DeepLabV3ResNet101`:   
```c++
void detect(const cv::Mat &mat, types::SegmentContent &content);
```  

> `lite::cv::segmentation::FCNResNet101`:   
```c++
void detect(const cv::Mat &mat, types::SegmentContent &content);
```  

> `lite::cv::style::FastStyleTransfer`:   
```c++
void detect(const cv::Mat &mat, types::StyleContent &style_content);
```

> `lite::cv::colorization::Colorizer`:   
```c++
void detect(const cv::Mat &mat, types::ColorizeContent &colorize_content);
```

> `lite::cv::resolution::SubPixelCNN`:   
```c++
void detect(const cv::Mat &mat, types::SuperResolutionContent &super_resolution_content);
```

> `lite::cv::classification::EfficientNetLite4`:   
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```

> `lite::cv::classification::ShuffleNetV2`:   
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::cv::classification::DenseNet`:   
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::cv::classification::GhostNet`:   
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::cv::classification::HdrDNet`:   
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::cv::classification::MobileNetV2`:   
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::cv::classification::ResNet`:   
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::cv::classification::ResNeXt`:   
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::cv::utils::hard_nms:`  
```c++
LITEHUB_EXPORTS void
hard_nms(std::vector<types::Boxf> &input, std::vector<types::Boxf> &output, float iou_threshold, unsigned int topk);
```

> `lite::cv::utils::blending_nms:`  
```c++
LITEHUB_EXPORTS void
blending_nms(std::vector<types::Boxf> &input, std::vector<types::Boxf> &output, float iou_threshold, unsigned int topk);
```

> `lite::cv::utils::offset_nms:`  
```c++
LITEHUB_EXPORTS void
offset_nms(std::vector<types::Boxf> &input, std::vector<types::Boxf> &output, float iou_threshold, unsigned int topk);
```

### 5.2 ONNXRuntime Version APIs.  
 
More details of basic types for ONNXRuntime Version APIs can be found at [ort_types](https://github.com/DefTruth/litehub/blob/main/ort/core/ort_types.h) . `(TODO: Add detailed API documentation).`

> `lite::onnxruntime::cv::detection::Yolo5`:
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes, 
            float score_threshold = 0.25f, float iou_threshold = 0.45f,
            unsigned int topk = 100, unsigned int nms_type = NMS::OFFSET);
```

> `lite::onnxruntime::cv::detection::Yolo4`:
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes, 
            float score_threshold = 0.25f, float iou_threshold = 0.45f,
            unsigned int topk = 100, unsigned int nms_type = NMS::OFFSET);
```

> `lite::onnxruntime::cv::detection::Yolo3`:
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes);
```

> `lite::onnxruntime::cv::detection::TinyYoloV3`:
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes);
```

> `lite::onnxruntime::cv::detection::SSD`:
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes, 
            float score_threshold = 0.25f, float iou_threshold = 0.45f,
            unsigned int topk = 100, unsigned int nms_type = NMS::OFFSET);
```

> `lite::onnxruntime::cv::detection::SSDMobileNetV1`:
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes, 
            float score_threshold = 0.25f, float iou_threshold = 0.45f,
            unsigned int topk = 100, unsigned int nms_type = NMS::OFFSET);
```

> `lite::onnxruntime::cv::face::FSANet`:
```c++
void detect(const cv::Mat &mat, types::EulerAngles &euler_angles);
```

> `lite::onnxruntime::cv::face::UltraFace`:
```c++
void detect(const cv::Mat &mat, std::vector<types::Boxf> &detected_boxes,
            float score_threshold = 0.7f, float iou_threshold = 0.3f,
            unsigned int topk = 300, unsigned int nms_type = 0);
```

> `lite::onnxruntime::cv::face::PFLD`:
```c++
void detect(const cv::Mat &mat, types::Landmarks &landmarks);
```  

> `lite::onnxruntime::cv::face::AgeGoogleNet`:
```c++
void detect(const cv::Mat &mat, types::Age &age);
```

> `lite::onnxruntime::cv::face::GenderGoogleNet`:
```c++
void detect(const cv::Mat &mat, types::Gender &gender);
```

> `lite::onnxruntime::cv::face::VGG16Age`:
```c++
void detect(const cv::Mat &mat, types::Age &age);
```

> `lite::onnxruntime::cv::face::VGG16Gender`:
```c++
void detect(const cv::Mat &mat, types::Gender &gender);
```  

> `lite::onnxruntime::cv::face::EmotionFerPlus`:
```c++
void detect(const cv::Mat &mat, types::Emotions &emotions);
```

> `lite::onnxruntime::cv::face::SSRNet`:
```c++
void detect(const cv::Mat &mat, types::Age &age);
```

> `lite::onnxruntime::cv::faceid::ArcFaceResNet`:
```c++
void detect(const cv::Mat &mat, types::FaceContent &face_content);
```

> `lite::onnxruntime::cv::segmentation::DeepLabV3ResNet101`:
```c++
void detect(const cv::Mat &mat, types::SegmentContent &content);
```

> `lite::onnxruntime::cv::segmentation::FCNResNet101`:
```c++
void detect(const cv::Mat &mat, types::SegmentContent &content);
```  

> `lite::onnxruntime::cv::style::FastStyleTransfer`:
```c++
void detect(const cv::Mat &mat, types::StyleContent &style_content);
```

> `lite::onnxruntime::cv::colorization::Colorizer`:
```c++
void detect(const cv::Mat &mat, types::ColorizeContent &colorize_content);
```

> `lite::onnxruntime::cv::resolution::SubPixelCNN`:
```c++
void detect(const cv::Mat &mat, types::SuperResolutionContent &super_resolution_content);
```  

> `lite::onnxruntime::cv::classification::EfficientNetLite4`:
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```

> `lite::onnxruntime::cv::classification::ShuffleNetV2`:
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::onnxruntime::cv::classification::DenseNet`:
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::onnxruntime::cv::classification::GhostNet`:
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::onnxruntime::cv::classification::HdrDNet`:
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::onnxruntime::cv::classification::MobileNetV2`:
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::onnxruntime::cv::classification::ResNet`:
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```  

> `lite::onnxruntime::cv::classification::ResNeXt`:
```c++
void detect(const cv::Mat &mat, types::ImageNetContent &content, unsigned int top_k = 5);
```

### 5.3 MNN Version APIs. 

`(TODO: Not implementation now, coming soon.)`  

> `lite::mnn::cv::detection::Yolo5`:

> `lite::mnn::cv::detection::Yolo4`:

> `lite::mnn::cv::detection::Yolo3`:

> `lite::mnn::cv::detection::TinyYoloV3`:

> `lite::mnn::cv::detection::SSD`:  

...

### 5.4 NCNN Version APIs.

`(TODO: Not implementation now, coming soon.)`

> `lite::ncnn::cv::detection::Yolo5`:

> `lite::ncnn::cv::detection::Yolo4`:

> `lite::ncnn::cv::detection::Yolo3`:

> `lite::ncnn::cv::detection::TinyYoloV3`:

> `lite::ncnn::cv::detection::SSD`:

...


## 6. Other Docs.  
### 6.1 Docs for ONNXRuntime. 
* [Rapid implementation of your inference using BasicOrtHandler](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_handler.zh.md)  
* [Some very useful onnxruntime c++ interfaces](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_useful_api.zh.md)  
* [How to compile a single model in this library you needed](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_build_single.zh.md)
* [How to convert SubPixelCNN to ONNX and implements with onnxruntime c++](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_subpixel_cnn.zh.md)
* [How to convert Colorizer to ONNX and implements with onnxruntime c++](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_colorizer.zh.md)
* [How to convert SSRNet to ONNX and implements with onnxruntime c++](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_ssrnet.zh.md)
* [How to convert YoloV3 to ONNX and implements with onnxruntime c++](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_yolov3.zh.md)
* [How to convert YoloV5 to ONNX and implements with onnxruntime c++](https://github.com/DefTruth/litehub/blob/main/docs/ort/ort_yolov5.zh.md)

### 6.2 Docs for [third_party](https://github.com/DefTruth/litehub/tree/main/third_party).  
Other build documents for different engines and different targets will be added later.

<div id="refer-anchor-1"></div> 

|Library|Target|Docs|
|:---:|:---:|:---:|
|OpenCV| mac-x86_64 | [opencv-mac-x86_64-build.zh.md](https://github.com/DefTruth/litehub/blob/main/docs/third_party/opencv-mac-x86_64-build.zh.md) |
|OpenCV| android-arm | [opencv-static-android-arm-build.zh.md](https://github.com/DefTruth/litehub/blob/main/docs/third_party/opencv-static-android-arm-build.zh.md) |
|onnxruntime| mac-x86_64 | [onnxruntime-mac-x86_64-build.zh.md](https://github.com/DefTruth/litehub/blob/main/docs/third_party/onnxruntime-mac-x86_64-build.zh.md) |
|onnxruntime| android-arm | [onnxruntime-android-arm-build.zh.md](https://github.com/DefTruth/litehub/blob/main/docs/third_party/onnxruntime-android-arm-build.zh.md) |
|NCNN| mac-x86_64 | TODO |
|MNN| mac-x86_64 | TODO |
|TNN| mac-x86_64 | TODO |

