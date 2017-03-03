all: clean p_sem_wait p_sem_post p_sem_clean

p_sem_wait:
	gcc process.h p_sem_wait.c -o p_sem_wait -lpthread

p_sem_post:
	gcc process.h p_sem_post.c -o p_sem_post -lpthread

p_sem_clean:
	gcc process.h p_sem_clean.c -o p_sem_clean -lpthread
   
clean:
	rm -f p_sem_wait
	rm -f p_sem_post
	rm -f p_sem_clean

run:
	./run.sh
