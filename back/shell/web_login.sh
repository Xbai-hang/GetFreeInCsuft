#!/bin/sh

# Config, 自行配置，记得删除<>
USER_ID="<宽带账号>"
PASSWORD="<宽带密码>"
INDEX_URL="<首页>"
QUERY_STRING="<抓包获取>"

logger -t "【auto-login】" "开始检测网络认证状态"
KEYWORD=$(curl --connect-timeout 10 -s www.baidu.com | grep "baidu")
logger -t "【auto-login】" "${KEYWORD}"
if [[ "$(printf '%s' "${KEYWORD}")" == '' ]]; then
  logger -t "【auto-login】" "检测到尚未认证，尝试自动认证"
  LOGIN_STATUS=$(curl -s -X POST "http://210.43.246.175/eportal/InterFace.do?method=login" -H "Connection: keep-alive" -H "Origin: http://210.43.246.175" -H "User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.102 Safari/537.36" -H "DNT: 1" -H "Content-Type: application/x-www-form-urlencoded; charset=UTF-8" -H "Accept: */*" -H "Referer: ${INDEX_URL}" -H "Accept-Encoding: gzip, deflate" -H "Accept-Language: zh-CN,zh;q=0.9,zh;q=0.8,en;q=0.7" --data "userId=${USER_ID}&password=${PASSWORD}&service=%25E4%25BA%2592%25E8%2581%2594%25E7%25BD%2591&queryString=${QUERY_STRING}&operatorPwd=&operatorUserId=&validcode=&passwordEncrypt=false")
  SUCCESS=$(echo ${LOGIN_STATUS} | grep "success")
  if [[ "$(printf '%s' "${SUCCESS}")" != '' ]]; then
    logger -t "【auto-login】" "自动认证成功"
  else
    LOGIN_STATUS=$(echo ${LOGIN_STATUS} | cut -d ',' -f3 | cut -d '"' -f4)
    logger -t "【auto-login】" "自动认证失败: ${LOGIN_STATUS}"
  fi
else
  logger -t "【auto-login】" "检测到已经认证"
fi
