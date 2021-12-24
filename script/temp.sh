#!/usr/bin/env bash

sensors | grep 'Core 1' | awk '{print $3}' | sed 's/+//g' | sed 's/.0//g'
