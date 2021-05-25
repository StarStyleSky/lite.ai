//
// Created by DefTruth on 2021/5/24.
//

#include <iostream>
#include <vector>

#include "ort/cv/yolov3.h"
#include "ort/core/ort_utils.h"


static void test_ortcv_yolov3()
{

  std::string onnx_path = "../../../hub/onnx/cv/yolov3-10.onnx";
  std::string test_img_path = "../../../examples/ort/resources/test_ortcv_yolov3.jpg";
  std::string save_img_path = "../../../logs/test_ortcv_yolov3.jpg";

  ortcv::YoloV3 *yolov3 = new ortcv::YoloV3(onnx_path);

  std::vector<ortcv::types::Boxf> detected_boxes;
  cv::Mat img_bgr = cv::imread(test_img_path);
  yolov3->detect(img_bgr, detected_boxes);

  ortcv::utils::draw_boxes_inplace(img_bgr, detected_boxes);

  cv::imwrite(save_img_path, img_bgr);

  std::cout << "Detected Boxes Num: " << detected_boxes.size() << std::endl;

  delete yolov3;

}

int main(__unused int argc, __unused char *argv[])
{
  test_ortcv_yolov3();
  return 0;
}
