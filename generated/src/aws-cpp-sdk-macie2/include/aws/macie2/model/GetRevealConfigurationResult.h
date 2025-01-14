﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/RevealConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class GetRevealConfigurationResult
  {
  public:
    AWS_MACIE2_API GetRevealConfigurationResult();
    AWS_MACIE2_API GetRevealConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetRevealConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current configuration settings and the status of the configuration for
     * the account.</p>
     */
    inline const RevealConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The current configuration settings and the status of the configuration for
     * the account.</p>
     */
    inline void SetConfiguration(const RevealConfiguration& value) { m_configuration = value; }

    /**
     * <p>The current configuration settings and the status of the configuration for
     * the account.</p>
     */
    inline void SetConfiguration(RevealConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>The current configuration settings and the status of the configuration for
     * the account.</p>
     */
    inline GetRevealConfigurationResult& WithConfiguration(const RevealConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The current configuration settings and the status of the configuration for
     * the account.</p>
     */
    inline GetRevealConfigurationResult& WithConfiguration(RevealConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRevealConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRevealConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRevealConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RevealConfiguration m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
