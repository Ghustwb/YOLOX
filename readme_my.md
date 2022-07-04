#### 关于TensorRT
**Python**
```
python tools/demo.py image --path /home/lcg/Pictures/image1.jpg -f exps/example/yolox_voc/yolox_voc_nano.py --trt --save_result
```
<img src="YOLOX_outputs/yolox_voc_nano/vis_res/2022_07_04_15_04_51/image1.jpg" width="500" >

**C++**
```
mkdir build
cd build
cmake ..
make
./yolox ../model_trt.engine -i /home/lcg/Pictures/image1.jpg
```
<img src="demo/TensorRT/cpp/build/det_res.jpg" width="500" >
相同的trt模型。python和c++结果不一样！