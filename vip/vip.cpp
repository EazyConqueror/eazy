dns:
  enable: true
  ipv6: false
  enhanced-mode: redir-host
  listen: 0.0.0.0:7894
  fallback-filter:
    geoip: true
    ipcidr:
    - 0.0.0.0/8
    - 10.0.0.0/8
    - 100.64.0.0/10
    - 127.0.0.0/8
    - 169.254.0.0/16
    - 172.16.0.0/12
    - 192.0.0.0/24
    - 192.0.2.0/24
    - 192.88.99.0/24
    - 192.168.0.0/16
    - 198.18.0.0/15
    - 198.51.100.0/24
    - 203.0.113.0/24
    - 224.0.0.0/4
    - 240.0.0.0/4
    - 255.255.255.255/32
    domain:
    - "+.google.com"
    - "+.facebook.com"
    - "+.youtube.com"
    - "+.githubusercontent.com"
  nameserver:
    - tcp://208.67.220.200
    - tcp://8.8.8.8
    - 208.67.220.200
    - 8.8.4.4
  fallback:
    - https://www.opendns.com/dns-query
    - https://dns.google/dns-query
    - tls://208.67.220.200:853
    - tls://8.8.4.4:853
tun:
  enable: true
  stack: gvisor 
  macOS-auto-route: true
  macOS-auto-detect-interface: true
  dns-hijack:
    - tcp://208.67.220.200:53
    - tcp://8.8.4.4:53
experimental:
  interface-name: en0
proxies:
  - {name: mr.loby.ml3, server: 142.93.168.188, port: 21612, udp: true, type: ss, cipher: chacha20-ietf-poly1305, password: zUOC2CcSPiEX}    
proxy-groups:
  - name: mrloby
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    tolerance: 50
    proxies:
     - mr.loby.ml3
rules:
  - DOMAIN,mgl.lobby.igamecj.com,mrloby
  - DOMAIN,pay.igamecj.com,mrloby
  - DOMAIN,graph.facebook.com,mrloby
  - DOMAIN,euspeed.igamecj.com,mrloby
  - MATCH,DIRECT
