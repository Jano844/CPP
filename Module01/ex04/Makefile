NAME		= replace
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
# CXXFLAGS	=  -std=c++98 -g

SRCS		=	srcs/main.cpp

OBJS		= $(SRCS:.cpp=.o)


RED			= \033[0;31m
GREEN		= \033[0;32m
CRYAN		= \033[0;36m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Compiling $(NAME)..."
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled successfully!$(CRYAN)"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

delete_replace:
	@rm -f *.replace
	@cd in_directory && rm -f *.replace && cd ..
	@echo "$(RED)all .replace files removed! in ex04 and ex04/in_directory directory."

clean:
	@echo "$(RED)Cleaning $(NAME) object files..."
	@rm -f $(OBJS)

fclean: clean delete_replace
	@echo "$(RED)Cleaning $(NAME)..."
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all delete_replace
