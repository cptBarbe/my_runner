#!/bin/bash

wget https://www.sfml-dev.org/files/CSFML-2.4-sources.zip
unzip CSFML-2.4-sources.zip
cmake CSFML-2.4
make -C CSFML-2.4
rm CSFML-2.4-sources.zip
