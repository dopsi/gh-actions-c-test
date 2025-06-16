FROM mcr.microsoft.com/devcontainers/base:ubuntu

USER root

RUN useradd -m -u 1001 -g 1001 ci && \
    apt-get update && \
    apt-get install -y --no-install-recommends reprotest diffoscope disorderfs faketime cmake clang lld ninja-build

USER vscode
