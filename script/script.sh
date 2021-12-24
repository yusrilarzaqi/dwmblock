#!/usr/bin/env bash


get_percent(){
  #used_mem_mb=$(free -m | awk '/^Mem/ {print $3}')
  used_mem_total=$(free -h | awk '/^Mem/ {print $3}' | sed s/i//g)

  echo $used_mem_total\B
}

main(){
  ram_percent=$(get_percent)
  echo "$ram_percent"
}


#run main driver
main
