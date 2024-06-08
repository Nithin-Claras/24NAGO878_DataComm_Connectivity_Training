NUM1=10
NUM2=20
RES=$(($NUM1 + $NUM2))
echo "sum of two numbers are: $RES"
RES1=`expr $NUM1 + $NUM2`
echo "sum of two numbers are: $RES1"
