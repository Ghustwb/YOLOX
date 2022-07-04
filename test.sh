python tools/demo.py image -f exps/example/yolox_voc/yolox_voc_nano.py \
-c YOLOX_outputs/yolox_voc_nano/best_ckpt.pth \
--path testfiles/img1.jpg --conf 0.3 --nms 0.65 
--tsize 640 --save_result --device cpu
