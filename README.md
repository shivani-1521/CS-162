
Berkeley Operating Systems MOOC

Personal Assignment 3

Implement own memory allocator from scratch

Personal Assignment 2

1. Creating HTTP webserver that should implement the following: 
	1. Create a listening socket and bind it to a port
	2. Wait a client to connect to the port
	3. Accept the client and obtain a new connection socket
	4. Read in and parse the HTTP request
	5. Do one of two things: (determined by command line arguments)
		• Serve a file from the local file system, or yield a 404 Not Found
		• Proxy the request to another HTTP server.
	6. Send the appropriate HTTP response header and attached file/document back to the client (or an
error message)
2. Implement a thread pool for serving multiple HTTP requests concurrently


Personal Assignment 1

1. Adding support for pwd and cd command in shell
2. Modifying shell so that it can execute programs when
they are entered into the shell
3. Modifying shell so that it uses the PATH variable from the environment to resolve program names
4. Modfiying shell so that it supports redirecting stdin and stdout to files
5. Ensuring that each program that starts is in its own process group. Stopping signals
should only affect the foregrounded program, not the backgrounded shell
6. Modifying shell so that it runs commands that end in an “&” in the background. Also adding a new built-in command wait, which waits until all background jobs have
terminated before returning to the prompt
7. Adding two built-in commands so that shells allow for running processes to be toggled between running in the foreground versus in
background


Personal Assignment 0

1. Creating Makefile
2. Implementing wc utility (which counts the number of lines, words, and characters
inside a particular text file) 
3. Noting down about tools gdb and objdump (and using it to learn about stack and heap) in gdb.txt, objdump.txt and map.txt.
4. Print out the maximum stack size, the maximum number of processes, and
maximum number of file descriptors for main.c.
