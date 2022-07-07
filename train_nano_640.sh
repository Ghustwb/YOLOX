export YOLOX_DATADIR="/home/lcg/Downloads/TrainingData"
python tools/train.py -f exps/example/yolox_voc/yolox_voc_nano_640.py -d 0 -b 78 --fp16 -o -c weights/yolox_nano.pth --cache
