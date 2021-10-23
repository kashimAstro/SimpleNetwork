# SimpleNetwork

## Instructions

- [Makefile](#makefile)

- [Test](#test)

### Makefile

- Makefile in root folder generates static library.

 ```console
foo@bar: SimpleNetwork $ make  
```

- Makefile in each example folder compile and link Server/Client source code for testing

 ```console
foo@bar: SimpleNetwork/example-client $ make  
```

### Test

- For testing example client. Execute and pass **ServerIP**, **Port** and **Message** as arguments:

```console
foo@bar: SimpleNetwork/example-client $ ./client 127.0.0.1 5050 yourMessage 
```

- For testing example Server. Execute and pass **Port** and optional **time-send** :

```console
foo@bar: SimpleNetwork/example-server $ ./server 5050 1
```
