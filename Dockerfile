FROM gcc:latest

RUN apt-get update -y && \
    apt-get install -y --no-install-recommends openssh-server \
        libopenmpi-dev openmpi-bin openmpi-common openmpi-doc