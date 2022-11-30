<?php

$curl = curl_init();

curl_setopt_array($curl, array(
  CURLOPT_URL => 'https://sandbox.union54.technology/v2/card?card=daff400c-e906-4222-b2ad-ea011e111382&trackingNumber=298503800068836',
  CURLOPT_RETURNTRANSFER => true,
  CURLOPT_ENCODING => '',
  CURLOPT_MAXREDIRS => 10,
  CURLOPT_TIMEOUT => 0,
  CURLOPT_FOLLOWLOCATION => true,
  CURLOPT_HTTP_VERSION => CURL_HTTP_VERSION_1_1,
  CURLOPT_CUSTOMREQUEST => 'GET',
  CURLOPT_HTTPHEADER => array(
    'Accept: application/json',
    'Authorization: Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpbnRlZ3JhdG9yIjoiMmE3MjkxYmUtYjkxNS00ZDhmLWJkNDQtNDczNTE0NjJlODNmIiwia2V5IjoiM2U1ZWJkYWYtMjU0Mi00NzI5LWExMmUtYjA2MDFmZTM1YzEwIiwiYWRtaW4iOmZhbHNlLCJzdGFnZSI6InNhbmRib3giLCJpYXQiOjE2NTM4MDQ5ODF9.HvdOMrSWlmh3bcv_qQK640IhF0gOOg1TIY6f1_OXtdE'
  ),
));

$response = curl_exec($curl);

curl_close($curl);
echo $response;
