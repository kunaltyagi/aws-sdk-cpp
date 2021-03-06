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

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/acm/model/DescribeCertificateResult.h>
#include <aws/acm/model/GetCertificateResult.h>
#include <aws/acm/model/ImportCertificateResult.h>
#include <aws/acm/model/ListCertificatesResult.h>
#include <aws/acm/model/ListTagsForCertificateResult.h>
#include <aws/acm/model/RequestCertificateResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ACM
{

namespace Model
{
        class AddTagsToCertificateRequest;
        class DeleteCertificateRequest;
        class DescribeCertificateRequest;
        class GetCertificateRequest;
        class ImportCertificateRequest;
        class ListCertificatesRequest;
        class ListTagsForCertificateRequest;
        class RemoveTagsFromCertificateRequest;
        class RequestCertificateRequest;
        class ResendValidationEmailRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMErrors>> AddTagsToCertificateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMErrors>> DeleteCertificateOutcome;
        typedef Aws::Utils::Outcome<DescribeCertificateResult, Aws::Client::AWSError<ACMErrors>> DescribeCertificateOutcome;
        typedef Aws::Utils::Outcome<GetCertificateResult, Aws::Client::AWSError<ACMErrors>> GetCertificateOutcome;
        typedef Aws::Utils::Outcome<ImportCertificateResult, Aws::Client::AWSError<ACMErrors>> ImportCertificateOutcome;
        typedef Aws::Utils::Outcome<ListCertificatesResult, Aws::Client::AWSError<ACMErrors>> ListCertificatesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForCertificateResult, Aws::Client::AWSError<ACMErrors>> ListTagsForCertificateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMErrors>> RemoveTagsFromCertificateOutcome;
        typedef Aws::Utils::Outcome<RequestCertificateResult, Aws::Client::AWSError<ACMErrors>> RequestCertificateOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<ACMErrors>> ResendValidationEmailOutcome;

        typedef std::future<AddTagsToCertificateOutcome> AddTagsToCertificateOutcomeCallable;
        typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
        typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
        typedef std::future<GetCertificateOutcome> GetCertificateOutcomeCallable;
        typedef std::future<ImportCertificateOutcome> ImportCertificateOutcomeCallable;
        typedef std::future<ListCertificatesOutcome> ListCertificatesOutcomeCallable;
        typedef std::future<ListTagsForCertificateOutcome> ListTagsForCertificateOutcomeCallable;
        typedef std::future<RemoveTagsFromCertificateOutcome> RemoveTagsFromCertificateOutcomeCallable;
        typedef std::future<RequestCertificateOutcome> RequestCertificateOutcomeCallable;
        typedef std::future<ResendValidationEmailOutcome> ResendValidationEmailOutcomeCallable;
} // namespace Model

  class ACMClient;

    typedef std::function<void(const ACMClient*, const Model::AddTagsToCertificateRequest&, const Model::AddTagsToCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::DeleteCertificateRequest&, const Model::DeleteCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::DescribeCertificateRequest&, const Model::DescribeCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::GetCertificateRequest&, const Model::GetCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::ImportCertificateRequest&, const Model::ImportCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::ListCertificatesRequest&, const Model::ListCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCertificatesResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::ListTagsForCertificateRequest&, const Model::ListTagsForCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::RemoveTagsFromCertificateRequest&, const Model::RemoveTagsFromCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::RequestCertificateRequest&, const Model::RequestCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RequestCertificateResponseReceivedHandler;
    typedef std::function<void(const ACMClient*, const Model::ResendValidationEmailRequest&, const Model::ResendValidationEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResendValidationEmailResponseReceivedHandler;

  /**
   * <fullname>AWS Certificate Manager</fullname> <p>Welcome to the AWS Certificate
   * Manager (ACM) API documentation.</p> <p>You can use ACM to manage SSL/TLS
   * certificates for your AWS-based websites and applications. For general
   * information about using ACM, see the <a
   * href="http://docs.aws.amazon.com/acm/latest/userguide/"> <i>AWS Certificate
   * Manager User Guide</i> </a>.</p>
   */
  class AWS_ACM_API ACMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ACMClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ACMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ACMClient();

        inline virtual const char* GetServiceClientName() const override { return "acm"; }


        /**
         * <p>Adds one or more tags to an ACM Certificate. Tags are labels that you can use
         * to identify and organize your AWS resources. Each tag consists of a
         * <code>key</code> and an optional <code>value</code>. You specify the certificate
         * on input by its Amazon Resource Name (ARN). You specify the tag by using a
         * key-value pair.</p> <p>You can apply a tag to just one certificate if you want
         * to identify a specific characteristic of that certificate, or you can apply the
         * same tag to multiple certificates if you want to filter for a common
         * relationship among those certificates. Similarly, you can apply the same tag to
         * multiple resources if you want to specify a relationship among those resources.
         * For example, you can add the same tag to an ACM Certificate and an Elastic Load
         * Balancing load balancer to indicate that they are both used by the same website.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/tags.html">Tagging ACM
         * Certificates</a>.</p> <p>To remove one or more tags, use the
         * <a>RemoveTagsFromCertificate</a> action. To view all of the tags that have been
         * applied to the certificate, use the <a>ListTagsForCertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/AddTagsToCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToCertificateOutcome AddTagsToCertificate(const Model::AddTagsToCertificateRequest& request) const;

        /**
         * <p>Adds one or more tags to an ACM Certificate. Tags are labels that you can use
         * to identify and organize your AWS resources. Each tag consists of a
         * <code>key</code> and an optional <code>value</code>. You specify the certificate
         * on input by its Amazon Resource Name (ARN). You specify the tag by using a
         * key-value pair.</p> <p>You can apply a tag to just one certificate if you want
         * to identify a specific characteristic of that certificate, or you can apply the
         * same tag to multiple certificates if you want to filter for a common
         * relationship among those certificates. Similarly, you can apply the same tag to
         * multiple resources if you want to specify a relationship among those resources.
         * For example, you can add the same tag to an ACM Certificate and an Elastic Load
         * Balancing load balancer to indicate that they are both used by the same website.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/tags.html">Tagging ACM
         * Certificates</a>.</p> <p>To remove one or more tags, use the
         * <a>RemoveTagsFromCertificate</a> action. To view all of the tags that have been
         * applied to the certificate, use the <a>ListTagsForCertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/AddTagsToCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToCertificateOutcomeCallable AddTagsToCertificateCallable(const Model::AddTagsToCertificateRequest& request) const;

        /**
         * <p>Adds one or more tags to an ACM Certificate. Tags are labels that you can use
         * to identify and organize your AWS resources. Each tag consists of a
         * <code>key</code> and an optional <code>value</code>. You specify the certificate
         * on input by its Amazon Resource Name (ARN). You specify the tag by using a
         * key-value pair.</p> <p>You can apply a tag to just one certificate if you want
         * to identify a specific characteristic of that certificate, or you can apply the
         * same tag to multiple certificates if you want to filter for a common
         * relationship among those certificates. Similarly, you can apply the same tag to
         * multiple resources if you want to specify a relationship among those resources.
         * For example, you can add the same tag to an ACM Certificate and an Elastic Load
         * Balancing load balancer to indicate that they are both used by the same website.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/tags.html">Tagging ACM
         * Certificates</a>.</p> <p>To remove one or more tags, use the
         * <a>RemoveTagsFromCertificate</a> action. To view all of the tags that have been
         * applied to the certificate, use the <a>ListTagsForCertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/AddTagsToCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToCertificateAsync(const Model::AddTagsToCertificateRequest& request, const AddTagsToCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an ACM Certificate and its associated private key. If this action
         * succeeds, the certificate no longer appears in the list of ACM Certificates that
         * can be displayed by calling the <a>ListCertificates</a> action or be retrieved
         * by calling the <a>GetCertificate</a> action. The certificate will not be
         * available for use by other AWS services. </p> <note> <p>You cannot delete an ACM
         * Certificate that is being used by another AWS service. To delete a certificate
         * that is in use, the certificate association must first be removed.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * <p>Deletes an ACM Certificate and its associated private key. If this action
         * succeeds, the certificate no longer appears in the list of ACM Certificates that
         * can be displayed by calling the <a>ListCertificates</a> action or be retrieved
         * by calling the <a>GetCertificate</a> action. The certificate will not be
         * available for use by other AWS services. </p> <note> <p>You cannot delete an ACM
         * Certificate that is being used by another AWS service. To delete a certificate
         * that is in use, the certificate association must first be removed.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DeleteCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;

        /**
         * <p>Deletes an ACM Certificate and its associated private key. If this action
         * succeeds, the certificate no longer appears in the list of ACM Certificates that
         * can be displayed by calling the <a>ListCertificates</a> action or be retrieved
         * by calling the <a>GetCertificate</a> action. The certificate will not be
         * available for use by other AWS services. </p> <note> <p>You cannot delete an ACM
         * Certificate that is being used by another AWS service. To delete a certificate
         * that is in use, the certificate association must first be removed.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DeleteCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed metadata about the specified ACM Certificate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DescribeCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest& request) const;

        /**
         * <p>Returns detailed metadata about the specified ACM Certificate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DescribeCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificateOutcomeCallable DescribeCertificateCallable(const Model::DescribeCertificateRequest& request) const;

        /**
         * <p>Returns detailed metadata about the specified ACM Certificate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DescribeCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an ACM Certificate and certificate chain for the certificate
         * specified by an ARN. The chain is an ordered list of certificates that contains
         * the ACM Certificate, intermediate certificates of subordinate CAs, and the root
         * certificate in that order. The certificate and certificate chain are base64
         * encoded. If you want to decode the certificate chain to see the individual
         * certificate fields, you can use OpenSSL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/GetCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCertificateOutcome GetCertificate(const Model::GetCertificateRequest& request) const;

        /**
         * <p>Retrieves an ACM Certificate and certificate chain for the certificate
         * specified by an ARN. The chain is an ordered list of certificates that contains
         * the ACM Certificate, intermediate certificates of subordinate CAs, and the root
         * certificate in that order. The certificate and certificate chain are base64
         * encoded. If you want to decode the certificate chain to see the individual
         * certificate fields, you can use OpenSSL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/GetCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCertificateOutcomeCallable GetCertificateCallable(const Model::GetCertificateRequest& request) const;

        /**
         * <p>Retrieves an ACM Certificate and certificate chain for the certificate
         * specified by an ARN. The chain is an ordered list of certificates that contains
         * the ACM Certificate, intermediate certificates of subordinate CAs, and the root
         * certificate in that order. The certificate and certificate chain are base64
         * encoded. If you want to decode the certificate chain to see the individual
         * certificate fields, you can use OpenSSL.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/GetCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCertificateAsync(const Model::GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports an SSL/TLS certificate into AWS Certificate Manager (ACM) to use with
         * <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-services.html">ACM's
         * integrated AWS services</a>.</p> <note> <p>ACM does not provide <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
         * renewal</a> for certificates that you import.</p> </note> <p>For more
         * information about importing certificates into ACM, including the differences
         * between certificates that you import and those that ACM provides, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">
         * Importing Certificates</a> in the <i>AWS Certificate Manager User Guide</i>.</p>
         * <p>To import a certificate, you must provide the certificate and the matching
         * private key. When the certificate is not self-signed, you must also provide a
         * certificate chain. You can omit the certificate chain when importing a
         * self-signed certificate.</p> <p>The certificate, private key, and certificate
         * chain must be PEM-encoded. For more information about converting these items to
         * PEM format, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html#import-certificate-troubleshooting">Importing
         * Certificates Troubleshooting</a> in the <i>AWS Certificate Manager User
         * Guide</i>.</p> <p>To import a new certificate, omit the
         * <code>CertificateArn</code> field. Include this field only when you want to
         * replace a previously imported certificate.</p> <p>When you import a certificate
         * by using the CLI or one of the SDKs, you must specify the certificate, chain,
         * and private key parameters as file names preceded by <code>file://</code>. For
         * example, you can specify a certificate saved in the <code>C:\temp</code> folder
         * as <code>C:\temp\certificate_to_import.pem</code>. If you are making an HTTP or
         * HTTPS Query request, include these parameters as BLOBs. </p> <p>This operation
         * returns the <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
         * Resource Name (ARN)</a> of the imported certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ImportCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCertificateOutcome ImportCertificate(const Model::ImportCertificateRequest& request) const;

        /**
         * <p>Imports an SSL/TLS certificate into AWS Certificate Manager (ACM) to use with
         * <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-services.html">ACM's
         * integrated AWS services</a>.</p> <note> <p>ACM does not provide <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
         * renewal</a> for certificates that you import.</p> </note> <p>For more
         * information about importing certificates into ACM, including the differences
         * between certificates that you import and those that ACM provides, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">
         * Importing Certificates</a> in the <i>AWS Certificate Manager User Guide</i>.</p>
         * <p>To import a certificate, you must provide the certificate and the matching
         * private key. When the certificate is not self-signed, you must also provide a
         * certificate chain. You can omit the certificate chain when importing a
         * self-signed certificate.</p> <p>The certificate, private key, and certificate
         * chain must be PEM-encoded. For more information about converting these items to
         * PEM format, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html#import-certificate-troubleshooting">Importing
         * Certificates Troubleshooting</a> in the <i>AWS Certificate Manager User
         * Guide</i>.</p> <p>To import a new certificate, omit the
         * <code>CertificateArn</code> field. Include this field only when you want to
         * replace a previously imported certificate.</p> <p>When you import a certificate
         * by using the CLI or one of the SDKs, you must specify the certificate, chain,
         * and private key parameters as file names preceded by <code>file://</code>. For
         * example, you can specify a certificate saved in the <code>C:\temp</code> folder
         * as <code>C:\temp\certificate_to_import.pem</code>. If you are making an HTTP or
         * HTTPS Query request, include these parameters as BLOBs. </p> <p>This operation
         * returns the <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
         * Resource Name (ARN)</a> of the imported certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ImportCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportCertificateOutcomeCallable ImportCertificateCallable(const Model::ImportCertificateRequest& request) const;

        /**
         * <p>Imports an SSL/TLS certificate into AWS Certificate Manager (ACM) to use with
         * <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-services.html">ACM's
         * integrated AWS services</a>.</p> <note> <p>ACM does not provide <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
         * renewal</a> for certificates that you import.</p> </note> <p>For more
         * information about importing certificates into ACM, including the differences
         * between certificates that you import and those that ACM provides, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">
         * Importing Certificates</a> in the <i>AWS Certificate Manager User Guide</i>.</p>
         * <p>To import a certificate, you must provide the certificate and the matching
         * private key. When the certificate is not self-signed, you must also provide a
         * certificate chain. You can omit the certificate chain when importing a
         * self-signed certificate.</p> <p>The certificate, private key, and certificate
         * chain must be PEM-encoded. For more information about converting these items to
         * PEM format, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html#import-certificate-troubleshooting">Importing
         * Certificates Troubleshooting</a> in the <i>AWS Certificate Manager User
         * Guide</i>.</p> <p>To import a new certificate, omit the
         * <code>CertificateArn</code> field. Include this field only when you want to
         * replace a previously imported certificate.</p> <p>When you import a certificate
         * by using the CLI or one of the SDKs, you must specify the certificate, chain,
         * and private key parameters as file names preceded by <code>file://</code>. For
         * example, you can specify a certificate saved in the <code>C:\temp</code> folder
         * as <code>C:\temp\certificate_to_import.pem</code>. If you are making an HTTP or
         * HTTPS Query request, include these parameters as BLOBs. </p> <p>This operation
         * returns the <a
         * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
         * Resource Name (ARN)</a> of the imported certificate.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ImportCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportCertificateAsync(const Model::ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of ACM Certificates and the domain name for each. You can
         * optionally filter the list to return only the certificates that match the
         * specified status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ListCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificatesOutcome ListCertificates(const Model::ListCertificatesRequest& request) const;

        /**
         * <p>Retrieves a list of ACM Certificates and the domain name for each. You can
         * optionally filter the list to return only the certificates that match the
         * specified status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ListCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificatesOutcomeCallable ListCertificatesCallable(const Model::ListCertificatesRequest& request) const;

        /**
         * <p>Retrieves a list of ACM Certificates and the domain name for each. You can
         * optionally filter the list to return only the certificates that match the
         * specified status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ListCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificatesAsync(const Model::ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that have been applied to the ACM Certificate. Use the
         * certificate's Amazon Resource Name (ARN) to specify the certificate. To add a
         * tag to an ACM Certificate, use the <a>AddTagsToCertificate</a> action. To delete
         * a tag, use the <a>RemoveTagsFromCertificate</a> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ListTagsForCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForCertificateOutcome ListTagsForCertificate(const Model::ListTagsForCertificateRequest& request) const;

        /**
         * <p>Lists the tags that have been applied to the ACM Certificate. Use the
         * certificate's Amazon Resource Name (ARN) to specify the certificate. To add a
         * tag to an ACM Certificate, use the <a>AddTagsToCertificate</a> action. To delete
         * a tag, use the <a>RemoveTagsFromCertificate</a> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ListTagsForCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForCertificateOutcomeCallable ListTagsForCertificateCallable(const Model::ListTagsForCertificateRequest& request) const;

        /**
         * <p>Lists the tags that have been applied to the ACM Certificate. Use the
         * certificate's Amazon Resource Name (ARN) to specify the certificate. To add a
         * tag to an ACM Certificate, use the <a>AddTagsToCertificate</a> action. To delete
         * a tag, use the <a>RemoveTagsFromCertificate</a> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ListTagsForCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForCertificateAsync(const Model::ListTagsForCertificateRequest& request, const ListTagsForCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove one or more tags from an ACM Certificate. A tag consists of a
         * key-value pair. If you do not specify the value portion of the tag when calling
         * this function, the tag will be removed regardless of value. If you specify a
         * value, the tag is removed only if it is associated with the specified value.</p>
         * <p>To add tags to a certificate, use the <a>AddTagsToCertificate</a> action. To
         * view all of the tags that have been applied to a specific ACM Certificate, use
         * the <a>ListTagsForCertificate</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RemoveTagsFromCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromCertificateOutcome RemoveTagsFromCertificate(const Model::RemoveTagsFromCertificateRequest& request) const;

        /**
         * <p>Remove one or more tags from an ACM Certificate. A tag consists of a
         * key-value pair. If you do not specify the value portion of the tag when calling
         * this function, the tag will be removed regardless of value. If you specify a
         * value, the tag is removed only if it is associated with the specified value.</p>
         * <p>To add tags to a certificate, use the <a>AddTagsToCertificate</a> action. To
         * view all of the tags that have been applied to a specific ACM Certificate, use
         * the <a>ListTagsForCertificate</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RemoveTagsFromCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromCertificateOutcomeCallable RemoveTagsFromCertificateCallable(const Model::RemoveTagsFromCertificateRequest& request) const;

        /**
         * <p>Remove one or more tags from an ACM Certificate. A tag consists of a
         * key-value pair. If you do not specify the value portion of the tag when calling
         * this function, the tag will be removed regardless of value. If you specify a
         * value, the tag is removed only if it is associated with the specified value.</p>
         * <p>To add tags to a certificate, use the <a>AddTagsToCertificate</a> action. To
         * view all of the tags that have been applied to a specific ACM Certificate, use
         * the <a>ListTagsForCertificate</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RemoveTagsFromCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromCertificateAsync(const Model::RemoveTagsFromCertificateRequest& request, const RemoveTagsFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests an ACM Certificate for use with other AWS services. To request an
         * ACM Certificate, you must specify the fully qualified domain name (FQDN) for
         * your site in the <code>DomainName</code> parameter. You can also specify
         * additional FQDNs in the <code>SubjectAlternativeNames</code> parameter if users
         * can reach your site by using other names. </p> <p>For each domain name you
         * specify, email is sent to the domain owner to request approval to issue the
         * certificate. Email is sent to three registered contact addresses in the WHOIS
         * database and to five common system administration addresses formed from the
         * <code>DomainName</code> you enter or the optional <code>ValidationDomain</code>
         * parameter. For more information, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate.html">Validate
         * Domain Ownership</a>. </p> <p>After receiving approval from the domain owner,
         * the ACM Certificate is issued. For more information, see the <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager
         * User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RequestCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestCertificateOutcome RequestCertificate(const Model::RequestCertificateRequest& request) const;

        /**
         * <p>Requests an ACM Certificate for use with other AWS services. To request an
         * ACM Certificate, you must specify the fully qualified domain name (FQDN) for
         * your site in the <code>DomainName</code> parameter. You can also specify
         * additional FQDNs in the <code>SubjectAlternativeNames</code> parameter if users
         * can reach your site by using other names. </p> <p>For each domain name you
         * specify, email is sent to the domain owner to request approval to issue the
         * certificate. Email is sent to three registered contact addresses in the WHOIS
         * database and to five common system administration addresses formed from the
         * <code>DomainName</code> you enter or the optional <code>ValidationDomain</code>
         * parameter. For more information, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate.html">Validate
         * Domain Ownership</a>. </p> <p>After receiving approval from the domain owner,
         * the ACM Certificate is issued. For more information, see the <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager
         * User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RequestCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestCertificateOutcomeCallable RequestCertificateCallable(const Model::RequestCertificateRequest& request) const;

        /**
         * <p>Requests an ACM Certificate for use with other AWS services. To request an
         * ACM Certificate, you must specify the fully qualified domain name (FQDN) for
         * your site in the <code>DomainName</code> parameter. You can also specify
         * additional FQDNs in the <code>SubjectAlternativeNames</code> parameter if users
         * can reach your site by using other names. </p> <p>For each domain name you
         * specify, email is sent to the domain owner to request approval to issue the
         * certificate. Email is sent to three registered contact addresses in the WHOIS
         * database and to five common system administration addresses formed from the
         * <code>DomainName</code> you enter or the optional <code>ValidationDomain</code>
         * parameter. For more information, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate.html">Validate
         * Domain Ownership</a>. </p> <p>After receiving approval from the domain owner,
         * the ACM Certificate is issued. For more information, see the <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager
         * User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/RequestCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestCertificateAsync(const Model::RequestCertificateRequest& request, const RequestCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resends the email that requests domain ownership validation. The domain owner
         * or an authorized representative must approve the ACM Certificate before it can
         * be issued. The certificate can be approved by clicking a link in the mail to
         * navigate to the Amazon certificate approval website and then clicking <b>I
         * Approve</b>. However, the validation email can be blocked by spam filters.
         * Therefore, if you do not receive the original mail, you can request that the
         * mail be resent within 72 hours of requesting the ACM Certificate. If more than
         * 72 hours have elapsed since your original request or since your last attempt to
         * resend validation mail, you must request a new certificate. For more information
         * about setting up your contact email addresses, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/setup-email.html">Configure
         * Email for your Domain</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ResendValidationEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::ResendValidationEmailOutcome ResendValidationEmail(const Model::ResendValidationEmailRequest& request) const;

        /**
         * <p>Resends the email that requests domain ownership validation. The domain owner
         * or an authorized representative must approve the ACM Certificate before it can
         * be issued. The certificate can be approved by clicking a link in the mail to
         * navigate to the Amazon certificate approval website and then clicking <b>I
         * Approve</b>. However, the validation email can be blocked by spam filters.
         * Therefore, if you do not receive the original mail, you can request that the
         * mail be resent within 72 hours of requesting the ACM Certificate. If more than
         * 72 hours have elapsed since your original request or since your last attempt to
         * resend validation mail, you must request a new certificate. For more information
         * about setting up your contact email addresses, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/setup-email.html">Configure
         * Email for your Domain</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ResendValidationEmail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResendValidationEmailOutcomeCallable ResendValidationEmailCallable(const Model::ResendValidationEmailRequest& request) const;

        /**
         * <p>Resends the email that requests domain ownership validation. The domain owner
         * or an authorized representative must approve the ACM Certificate before it can
         * be issued. The certificate can be approved by clicking a link in the mail to
         * navigate to the Amazon certificate approval website and then clicking <b>I
         * Approve</b>. However, the validation email can be blocked by spam filters.
         * Therefore, if you do not receive the original mail, you can request that the
         * mail be resent within 72 hours of requesting the ACM Certificate. If more than
         * 72 hours have elapsed since your original request or since your last attempt to
         * resend validation mail, you must request a new certificate. For more information
         * about setting up your contact email addresses, see <a
         * href="http://docs.aws.amazon.com/acm/latest/userguide/setup-email.html">Configure
         * Email for your Domain</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/ResendValidationEmail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResendValidationEmailAsync(const Model::ResendValidationEmailRequest& request, const ResendValidationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddTagsToCertificateAsyncHelper(const Model::AddTagsToCertificateRequest& request, const AddTagsToCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCertificateAsyncHelper(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCertificateAsyncHelper(const Model::DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCertificateAsyncHelper(const Model::GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportCertificateAsyncHelper(const Model::ImportCertificateRequest& request, const ImportCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCertificatesAsyncHelper(const Model::ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForCertificateAsyncHelper(const Model::ListTagsForCertificateRequest& request, const ListTagsForCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromCertificateAsyncHelper(const Model::RemoveTagsFromCertificateRequest& request, const RemoveTagsFromCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RequestCertificateAsyncHelper(const Model::RequestCertificateRequest& request, const RequestCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResendValidationEmailAsyncHelper(const Model::ResendValidationEmailRequest& request, const ResendValidationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ACM
} // namespace Aws
