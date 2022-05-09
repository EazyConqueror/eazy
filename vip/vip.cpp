port: 7890
socks-port: 7891
redir-port: 7892
tproxy-port: 7895
mixed-port: 7893
allow-lan: true
mode: rule
log-level: info
ipv6: false
external-controller: 0.0.0.0:9090
dns:
  enable: true
  ipv6: false
  enhanced-mode: fake-ip
  listen: 0.0.0.0:7874
  default-nameserver:
    - 114.114.114.114
    - 119.29.29.29
    - 9.9.9.9
    - 8.8.8.8
    - 8.8.4.4
    - 1.1.1.1
    - 1.0.0.1
  nameserver:
    - 114.114.114.114
    - 119.29.29.29
    - 9.9.9.9
    - 8.8.8.8
    - 8.8.4.4
    - 1.1.1.1
    - 1.0.0.1
    - https://dns.adguard.com/dns-query
    - https://dns.google/dns-query
    - tls://dns.adguard.com
    - tls://dns.google
  fallback:
    - https://cloudflare-dns.com/dns-query
    - https://dns.google/dns-query
    - https://1.1.1.1/dns-query
    - tls://8.8.8.8:853
    - tls://dns.rubyfish.cn:853
    - https://1.1.1.1/dns-query
proxies:
  - name: "ws"
    type: vmess
    server: s.eazyconqueror.tk
    port: 95
    uuid: 513f43b0-79ea-4780-a1a9-115984fce85f
    alterId: 0
    cipher: auto
    udp: true
    network: ws
    ws-opts:
      path: /v2rayws
      headers:
        Host: pubgmobile.com
proxy-groups:
  - name: gameTLS
    type: select
    #disable-udp: true
    proxies:
      - "ws"
rules:
  - DST-PORT,9030,gameTLS
  - DST-PORT,9031,gameTLS
  - DST-PORT,20000,gameTLS
  - DST-PORT,20001,gameTLS
  - DST-PORT,20002,gameTLS
  - DOMAIN,www.pubgmobile.com,gameTLS
  - DOMAIN,dl.listdl.com,gameTLS
  - DOMAIN,crl3.digicert.com,gameTLS
  - DOMAIN,www.microvirt.com,gameTLS
  - DOMAIN,android-safebrowsing.google.com,gameTLS
  - DOMAIN,app-measurement.com,gameTLS
  - DOMAIN,lh3.googleusercontent.com,gameTLS
  - DOMAIN,android.crashsight.wetest.net,gameTLS
  - DOMAIN-SUFFIX,gstatic.com,gameTLS
  - DOMAIN-SUFFIX,gcloudcs.com,gameTLS
  - DOMAIN-SUFFIX,sg.tdatamaster.com,gameTLS
  - DOMAIN-SUFFIX,proximabeta.com,gameTLS
  - DOMAIN-SUFFIX,twimg.com,gameTLS
  - DOMAIN-SUFFIX,fbsbx.com,gameTLS
  - DOMAIN,graph.facebook.com,gameTLS
  - DOMAIN-SUFFIX,adjust.com,gameTLS
  - DOMAIN-SUFFIX,amsoveasea.com,gameTLS
  - DOMAIN-SUFFIX,gcloudsdk.com,gameTLS
  - DOMAIN-SUFFIX,gjacky.com,gameTLS
  - DOMAIN-SUFFIX,anticheatexpert.com,gameTLS
  - DOMAIN-SUFFIX,onezapp.com,gameTLS
  - DOMAIN-SUFFIX,qcloud.com,gameTLS
  - DOMAIN-SUFFIX,doubleclick.com,gameTLS
  - DOMAIN-SUFFIX,googleapis.com,gameTLS
  - DOMAIN-SUFFIX,gvt1.com,gameTLS
  - DOMAIN-SUFFIX,igamecj.com,gameTLS
  - DOMAIN-SUFFIX,qq.com,gameTLS
  - DOMAIN-SUFFIX,gcloudcs.com,gameTLS
  - IP-CIDR,203.205.239.243/24,gameTLS
  - IP-CIDR,129.226.2.165/24,gameTLS
  - IP-CIDR,172.16.0.1/24,gameTLS
  - IP-CIDR,137.208.72.137/24,gameTLS
  - IP-CIDR,162.0.0.0/8,gameTLS
  - IP-CIDR,49.0.0.0/8,gameTLS
  - IP-CIDR,20.0.0.0/8,gameTLS
  - GEOIP,CN,gameTLS
  - MATCH,DIRECT
