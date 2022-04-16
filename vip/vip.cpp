proxies:
  - name: "trojan"
    type: trojan
    server: s.eazyconqueror.tk
    port: 8443
    password: f42f0327-0b5d-4c93-a36d-dabcfb765153
    alpn:
      - h2
      - http/1.1
    skip-cert-verify: true
    
  - name: "vmess"
    type: vmess
    server: s.eazyconqueror.tk
    port: 95
    uuid: 4185b610-c69b-408c-aea7-bbec1f525b8c
    alterId: 0
    cipher: auto
    udp: true
    skip-cert-verify: true
    network: ws
    ws-opts:
      path: /v2rayws
      headers:
        Host: s.eazyconqueror.tk
    
  - name: "vmess-grpc"
    server: s.eazyconqueror.tk
    port: 2099
    type: vmess
    uuid: f89beb4c-83e7-4ff8-a3cf-483bcfd9de45
    alterId: 0
    cipher: auto
    network: grpc
    tls: true
    servername: s.eazyconqueror.tk
    skip-cert-verify: true
    grpc-opts:
      grpc-service-name: "scvps"
      
  - name: "ssr"
    type: ssr
    server: 207.154.225.199
    port: 1443
    cipher: aes-256-cfb
    password: vip3
    obfs: tls1.2_ticket_auth
    protocol: auth_chain_a
    # obfs-param: domain.tld
    # protocol-param: "#"
    # udp: true
proxy-groups:
  - name: gameTROJAN
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    tolerance: 50
    proxies:
      - "trojan"
      - "ssr"
      - "vmess"
      - "vmess-grpc"
  - name: gameDIR
    type: select
    proxies:
      - DIRECT
rules:
  - DOMAIN,www.pubgmobile.com,gameTROJAN
  - DOMAIN,dl.listdl.com,gameTROJAN
  - DOMAIN,app-measurement.com,gameTROJAN
  - DOMAIN,lh3.googleusercontent.com,gameTROJAN
  - DOMAIN,android.crashsight.wetest.net,gameTROJAN
  - DOMAIN-SUFFIX,gstatic.com,gameTROJAN
  - DOMAIN-SUFFIX,gcloudcs.com,gameTROJAN
  - DOMAIN-SUFFIX,sg.tdatamaster.com,gameTROJAN
  - DOMAIN-SUFFIX,proximabeta.com,gameTROJAN
  - DOMAIN-SUFFIX,twimg.com,gameTROJAN
  - DOMAIN-SUFFIX,fbsbx.com,gameTROJAN
  - DOMAIN-SUFFIX,facebook.com,gameTROJAN
  - DOMAIN-SUFFIX,adjust.com,gameTROJAN
  - DOMAIN-SUFFIX,amsoveasea.com,gameTROJAN
  - DOMAIN-SUFFIX,gcloudsdk.com,gameTROJAN
  - DOMAIN-SUFFIX,gjacky.com,gameTROJAN
  - DOMAIN-SUFFIX,anticheatexpert.com,gameTROJAN
  - DOMAIN-SUFFIX,onezapp.com,gameTROJAN
  - DOMAIN-SUFFIX,qq.com,gameTROJAN
  - DOMAIN-SUFFIX,qcloud.com,gameTROJAN
  - DOMAIN-SUFFIX,doubleclick.com,gameTROJAN
  - DOMAIN-SUFFIX,googleapis.com,gameTROJAN
  - GEOIP,CN,gameTROJAN
  - IP-CIDR,162.0.0.0/8,gameDIR
  - IP-CIDR,49.0.0.0/8,gameDIR
  - IP-CIDR,20.0.0.0/8,gameDIR
  - DOMAIN-SUFFIX,igamecj.com,gameDIR
  - MATCH,DIRECT
