g++ main.cpp -o example

if [ $? -ne 0 ]; then
    echo "Build failed."
    exit 1
fi 

echo "Build successful"
./example