pointname:name.cpp point.cpp
	g++ point.cpp name.cpp -g -o pointname
clean:
	rm - *rf .o pointname
