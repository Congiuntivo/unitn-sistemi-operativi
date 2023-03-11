FROM ubuntu:latest
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get upgrade -y && apt-get install build-essential nano -y && rm -rf /var/lib/apt/lists/*
CMD ["/bin/bash"]

