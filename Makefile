
.PHONY : clean  $(OBJ)

all: $(OBJ)

$(OBJ):% : %.cpp
	g++ $< -o a.out

clean:
	rm $(OBJ)
