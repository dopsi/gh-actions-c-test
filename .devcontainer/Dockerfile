FROM mcr.microsoft.com/devcontainers/base:ubuntu

USER root

RUN groupadd -g 1001 ci && \
    useradd -m -u 1001 -g 1001 ci && \
    echo "ci ALL=(root) NOPASSWD:ALL" >  /etc/sudoers.d/ci && \
    apt-get update && \
    apt-get install -y --no-install-recommends reprotest diffoscope disorderfs faketime cmake clang lld ninja-build

USER vscode
