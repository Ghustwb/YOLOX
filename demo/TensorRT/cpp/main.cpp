#include "yolox.h"



int main(int argc, char** argv) {
    if (argc != 4) {
        std::cout << "Usage: " << argv[0] << " <trt_model.engine>" \
            << "-image/-video"<< "image or video path"<< std::endl;
        return 1;
    }
    std::string input_image_path;
    std::string input_video_path;

    if(std::string(argv[2]) == "-image")
    {
        input_image_path = argv[3];
        input_video_path = "";
        cv::Mat img = cv::imread(input_image_path);
        if(img.empty())
        {
            std::cerr << "image is empty!" << std::endl;
            return -1;
        }
        YOLOX detector(argv[1]);
        std::vector<Object> objects = detector.detect(img);
    }
    else if(std::string(argv[2]) == "-video")
    {
        input_image_path = "";
        //judge camera or video
        input_video_path = argv[3];
        cv::VideoCapture cap;
        if(input_video_path == "0")
        {
            cap.open(0);
        }
        else
        {
            cap.open(input_video_path);
        }
        if(!cap.isOpened())
        {
            std::cerr << "Video Open Failed" << std::endl;
            return -1;
        }
        YOLOX detector(argv[1]);
        while(1)
        {
            cv::Mat frame;
            cap >> frame;
            if(frame.empty())
            {
                std::cerr << "frame is empty!" << std::endl;
                break;
            }
            std::vector<Object> objects = detector.detect(frame);
            // cv::imshow("frame", frame);
            // if(cv::waitKey(1) == 27)
            // {
            //     break;
            // }
        }
    }
    else
    {
        std::cerr << "Usage: " << argv[0] << " <trt_model.engine>" \
            << "-image/-video"<< "image or video path"<< std::endl;
        return 1;
    }

    return 0;
}
