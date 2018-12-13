CXX=g++
CFLAGS=  -g -Wall -Werror -std=c++11

# 目标文件
TARGET=main
SRCS = main.cpp 



INC = -I./
OBJS = $(SRCS:.cpp=.o)

#%.o:%.c
#	$(CC)  $(INC) -o $@ -c $<

$(TARGET):$(SRCS)
	$(CXX) -o $@  $^ $(CFLAGS) $(INC)

clean:
	rm -rf $(TARGET) $(OBJS)

