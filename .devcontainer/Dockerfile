FROM mcr.microsoft.com/devcontainers/cpp

RUN sed -i "s#deb\.debian\.org#mirrors.aliyun.com#g" /etc/apt/sources.list.d/debian.sources
RUN apt update \
    && apt install -yq --no-install-recommends \
    vim nodejs
