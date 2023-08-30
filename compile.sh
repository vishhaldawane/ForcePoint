
echo "Compiling c++ source code"
g++ -c antiThreat.cpp

echo "Linking into the executable file..."
g++ -o antiThreat.out  antiThreat.o

echo "Running the code.."
./antiThreat.out

