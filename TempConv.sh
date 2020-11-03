#!/bin/bash

echo "Enter temperature in F:"
read tf
tc=$(echo "scale=2;(5/9)*($tf-32)"|bc)
echo "$tf F = $tc C"
