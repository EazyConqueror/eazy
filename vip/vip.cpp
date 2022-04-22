proxies:
  - name: mr.loby.ml2
    type: ss
    server: 91.201.66.235
    port: 36173
    udp: true
    skip-cert-verify: true
    cipher: chacha20-ietf-poly1305
    password: NJyUszNO0tEy
    
  - name: "vmess-grpc"
    server: super.eazyconqueror.tk
    port: 999
    type: vmess
    uuid: 19621920-af0d-477a-8189-3c1344439eef
    alterId: 0
    cipher: auto
    network: grpc
    servername: super.eazyconqueror.tk
    tls: true
    udp: true
    skip-cert-verify: true
    grpc-opts:
      grpc-service-name: "GunService"
      
proxy-groups:
  - name: gameOUTLIEN
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    tolerance: 50
    proxies:
      - mr.loby.ml2
  - name: gameGRPC
    type: select
    proxies:
      - "vmess-grpc"
  - name: gameSSR
    type: select
    proxies:
      - "vmess-grpc"
  - name: gameDIR
    type: select
    proxies:
      - DIRECT
rules:
  - DOMAIN,www.pubgmobile.com,gameOUTLIEN
  - DOMAIN,dl.listdl.com,gameOUTLIEN
  - DOMAIN,crl3.digicert.com,gameOUTLIEN
  - DOMAIN,www.microvirt.com,gameOUTLIEN
  - DOMAIN,android-safebrowsing.google.com,gameOUTLIEN
  - DOMAIN,app-measurement.com,gameOUTLIEN
  - DOMAIN,lh3.googleusercontent.com,gameOUTLIEN
  - DOMAIN,android.crashsight.wetest.net,gameOUTLIEN
  - DOMAIN-SUFFIX,gstatic.com,gameOUTLIEN
  - DOMAIN-SUFFIX,gcloudcs.com,gameOUTLIEN
  - DOMAIN-SUFFIX,sg.tdatamaster.com,gameOUTLIEN
  - DOMAIN-SUFFIX,proximabeta.com,gameOUTLIEN
  - DOMAIN-SUFFIX,twimg.com,gameOUTLIEN
  - DOMAIN-SUFFIX,fbsbx.com,gameOUTLIEN
  - DOMAIN,graph.facebook.com,gameOUTLIEN
  - DOMAIN-SUFFIX,adjust.com,gameOUTLIEN
  - DOMAIN-SUFFIX,amsoveasea.com,gameOUTLIEN
  - DOMAIN-SUFFIX,gcloudsdk.com,gameOUTLIEN
  - DOMAIN-SUFFIX,gjacky.com,gameOUTLIEN
  - DOMAIN-SUFFIX,anticheatexpert.com,gameOUTLIEN
  - DOMAIN-SUFFIX,onezapp.com,gameOUTLIEN
  - DOMAIN-SUFFIX,qcloud.com,gameOUTLIEN
  - DOMAIN-SUFFIX,doubleclick.com,gameOUTLIEN
  - DOMAIN-SUFFIX,googleapis.com,gameOUTLIEN
  - DOMAIN-SUFFIX,gvt1.com,gameOUTLIEN
  - DOMAIN-SUFFIX,igamecj.com,gameOUTLIEN
  - DOMAIN-SUFFIX,qq.com,gameOUTLIEN
  - DOMAIN-SUFFIX,gcloudcs.com,gameOUTLIEN
  - DST-PORT,20001,gameOUTLIEN
  - DST-PORT,20000,gameOUTLIEN
  - DST-PORT,20002,gameOUTLIEN
  - IP-CIDR,203.205.239.243/24,gameOUTLIEN
  - IP-CIDR,129.226.2.165/24,gameOUTLIEN
  - GEOIP,CN,gameOUTLIEN
  - IP-CIDR,162.0.0.0/8,gameGRPC
  - IP-CIDR,49.0.0.0/8,gameGRPC
  - IP-CIDR,20.0.0.0/8,gameGRPC
  - MATCH,DIRECT
