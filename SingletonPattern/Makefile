# 指令编译器和选项
CXX=g++
CXXFLAGS=-Wall -O2 -g -std=c++11

 
# 目标文件
TARGET=main
SRCS = Main.cpp \
       Singleton.cpp
INC = -I./
OBJS = $(SRCS:.cpp=.o)

$(TARGET):$(OBJS)
	$(CXX) -o $@ $^
 
clean:
	rm -rf $(TARGET) $(OBJS)
 
%.o:%.c
	$(CXX) $(CXXFLAGS) $(INC) -o $@ -c $<

