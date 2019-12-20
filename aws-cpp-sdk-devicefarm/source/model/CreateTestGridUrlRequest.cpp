﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/devicefarm/model/CreateTestGridUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTestGridUrlRequest::CreateTestGridUrlRequest() : 
    m_projectArnHasBeenSet(false),
    m_expiresInSeconds(0),
    m_expiresInSecondsHasBeenSet(false)
{
}

Aws::String CreateTestGridUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_expiresInSecondsHasBeenSet)
  {
   payload.WithInteger("expiresInSeconds", m_expiresInSeconds);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTestGridUrlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.CreateTestGridUrl"));
  return headers;

}




