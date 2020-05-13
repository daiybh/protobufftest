mkdir .\code
mkdir .\code\cpp
mkdir .\code\csharp
mkdir .\code\python
protoc -I=.\ --cpp_out=..\project3\project3\ --csharp_out=..\project3\ConsoleApp1\ --python_out=.\code\python broadcastInfokeydefine.proto
protoc -I=.\ --cpp_out=..\project3\project3\ --csharp_out=..\project3\ConsoleApp1\ --python_out=.\code\python broadcast.proto 
