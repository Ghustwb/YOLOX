export YOLOX_DATADIR="/home/lcg/Downloads/TrainingData"
python tools/train.py -f exps/example/yolox_voc/yolox_voc_nano.py -d 0 -c weights/yolox_nano.pth -b 64
