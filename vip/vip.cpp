proxies:
  - name: ws
    type: vmess
    server: it1.vpnjantit.com
    port: 10001
    uuid: 64f80246-31c6-11ed-8208-6340be144b72
    alterId: 0
    cipher: auto
    udp: true
    tls: true
    skip-cert-verify: true
    network: ws
    ws-opts:
      path: /vpnjantit
      headers:
        Host: it1.vpnjantit.com
proxy-groups:
  - name: gameTLS
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    proxies:
      - ws
rules:
  - DOMAIN-SUFFIX,version.common.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,csoversea.castle.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,client.common.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,d.network.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,freefiremobile-a.akamaihd.net,gameTLS
  - DOMAIN-SUFFIX,id.event.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,dl.wsu.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,login.common.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,bling2.midasplayer.com,gameTLS
  - DOMAIN-SUFFIX,dl.castle.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,ff.garena.com,gameTLS
  - DOMAIN-SUFFIX,garena.com,gameTLS
  - MATCH,DIRECT
