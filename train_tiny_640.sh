export YOLOX_DATADIR="/home/lcg/Downloads/TrainingData"
python tools/train.py -f exps/example/yolox_voc/yolox_voc_tiny_640.py -d 0 -b 68 --fp16 -o -c weights/yolox_tiny.pth --cache
