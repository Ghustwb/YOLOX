python tools/demo.py image -f exps/example/yolox_voc/yolox_voc_tiny_640.py \
-c YOLOX_outputs/yolox_voc_tiny_640/best_ckpt.pth \
--path /home/lcg/Downloads/save_image --conf 0.3 --nms 0.65 \
--tsize 640 --save_result  --device 0
