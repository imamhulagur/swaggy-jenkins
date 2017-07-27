/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

import * as models from '../model/models';

/* tslint:disable:no-unused-variable member-ordering */

export class RemoteAccessApi {
    protected basePath = 'http://localhost';
    public defaultHeaders : any = {};

    static $inject: string[] = ['$http', '$httpParamSerializer', 'basePath'];

    constructor(protected $http: ng.IHttpService, protected $httpParamSerializer?: (d: any) => any, basePath?: string) {
        if (basePath !== undefined) {
            this.basePath = basePath;
        }
    }

    /**
        * 
        * Retrieve computer details
        */
    public getComputer (extraHttpRequestParams?: any ) : ng.IHttpPromise<models.HudsonmodelComputerSet> {
        const localVarPath = this.basePath + '/computer/api/json?depth=1';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve CSRF protection token
        */
    public getCrumb (extraHttpRequestParams?: any ) : ng.IHttpPromise<models.HudsonsecuritycsrfDefaultCrumbIssuer> {
        const localVarPath = this.basePath + '/crumbIssuer/api/json';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve Jenkins details
        */
    public getJenkins (extraHttpRequestParams?: any ) : ng.IHttpPromise<models.HudsonmodelHudson> {
        const localVarPath = this.basePath + '/api/json';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve job details
        * @param name Name of the job
        */
    public getJob (name: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.HudsonmodelFreeStyleProject> {
        const localVarPath = this.basePath + '/job/{name}/api/json'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling getJob.');
        }
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve job configuration
        * @param name Name of the job
        */
    public getJobConfig (name: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<string> {
        const localVarPath = this.basePath + '/job/{name}/config.xml'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling getJobConfig.');
        }
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve job&#39;s last build details
        * @param name Name of the job
        */
    public getJobLastBuild (name: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.HudsonmodelFreeStyleBuild> {
        const localVarPath = this.basePath + '/job/{name}/lastBuild/api/json'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling getJobLastBuild.');
        }
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve job&#39;s build progressive text output
        * @param name Name of the job
        * @param number Build number
        * @param start Starting point of progressive text output
        */
    public getJobProgressiveText (name: string, number: string, start: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/job/{name}/{number}/logText/progressiveText'
            .replace('{' + 'name' + '}', String(name))
            .replace('{' + 'number' + '}', String(number));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling getJobProgressiveText.');
        }
        // verify required parameter 'number' is not null or undefined
        if (number === null || number === undefined) {
            throw new Error('Required parameter number was null or undefined when calling getJobProgressiveText.');
        }
        // verify required parameter 'start' is not null or undefined
        if (start === null || start === undefined) {
            throw new Error('Required parameter start was null or undefined when calling getJobProgressiveText.');
        }
        if (start !== undefined) {
            queryParameters['start'] = start;
        }

        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve queue details
        */
    public getQueue (extraHttpRequestParams?: any ) : ng.IHttpPromise<models.HudsonmodelQueue> {
        const localVarPath = this.basePath + '/queue/api/json';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve queued item details
        * @param number Queue number
        */
    public getQueueItem (number: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.HudsonmodelQueue> {
        const localVarPath = this.basePath + '/queue/item/{number}/api/json'
            .replace('{' + 'number' + '}', String(number));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'number' is not null or undefined
        if (number === null || number === undefined) {
            throw new Error('Required parameter number was null or undefined when calling getQueueItem.');
        }
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve view details
        * @param name Name of the view
        */
    public getView (name: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<models.HudsonmodelListView> {
        const localVarPath = this.basePath + '/view/{name}/api/json'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling getView.');
        }
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve view configuration
        * @param name Name of the view
        */
    public getViewConfig (name: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<string> {
        const localVarPath = this.basePath + '/view/{name}/config.xml'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling getViewConfig.');
        }
        let httpRequestParams: ng.IRequestConfig = {
            method: 'GET',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Retrieve Jenkins headers
        */
    public headJenkins (extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/api/json';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let httpRequestParams: ng.IRequestConfig = {
            method: 'HEAD',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Create a new job using job configuration, or copied from an existing job
        * @param name Name of the new job
        * @param from Existing job to copy from
        * @param mode Set to &#39;copy&#39; for copying an existing job
        * @param body Job configuration in config.xml format
        * @param jenkinsCrumb CSRF protection token
        * @param contentType Content type header application/xml
        */
    public postCreateItem (name: string, from?: string, mode?: string, body?: string, jenkinsCrumb?: string, contentType?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/createItem';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling postCreateItem.');
        }
        if (name !== undefined) {
            queryParameters['name'] = name;
        }

        if (from !== undefined) {
            queryParameters['from'] = from;
        }

        if (mode !== undefined) {
            queryParameters['mode'] = mode;
        }

        headerParams['Jenkins-Crumb'] = jenkinsCrumb;

        headerParams['Content-Type'] = contentType;

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: body,
                        params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Create a new view using view configuration
        * @param name Name of the new view
        * @param body View configuration in config.xml format
        * @param jenkinsCrumb CSRF protection token
        * @param contentType Content type header application/xml
        */
    public postCreateView (name: string, body?: string, jenkinsCrumb?: string, contentType?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/createView';

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling postCreateView.');
        }
        if (name !== undefined) {
            queryParameters['name'] = name;
        }

        headerParams['Jenkins-Crumb'] = jenkinsCrumb;

        headerParams['Content-Type'] = contentType;

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: body,
                        params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Build a job
        * @param name Name of the job
        * @param json 
        * @param token 
        * @param jenkinsCrumb CSRF protection token
        */
    public postJobBuild (name: string, json: string, token?: string, jenkinsCrumb?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/job/{name}/build'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling postJobBuild.');
        }
        // verify required parameter 'json' is not null or undefined
        if (json === null || json === undefined) {
            throw new Error('Required parameter json was null or undefined when calling postJobBuild.');
        }
        if (json !== undefined) {
            queryParameters['json'] = json;
        }

        if (token !== undefined) {
            queryParameters['token'] = token;
        }

        headerParams['Jenkins-Crumb'] = jenkinsCrumb;

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Update job configuration
        * @param name Name of the job
        * @param body Job configuration in config.xml format
        * @param jenkinsCrumb CSRF protection token
        */
    public postJobConfig (name: string, body: string, jenkinsCrumb?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/job/{name}/config.xml'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling postJobConfig.');
        }
        // verify required parameter 'body' is not null or undefined
        if (body === null || body === undefined) {
            throw new Error('Required parameter body was null or undefined when calling postJobConfig.');
        }
        headerParams['Jenkins-Crumb'] = jenkinsCrumb;

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: body,
                        params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Delete a job
        * @param name Name of the job
        * @param jenkinsCrumb CSRF protection token
        */
    public postJobDelete (name: string, jenkinsCrumb?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/job/{name}/doDelete'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling postJobDelete.');
        }
        headerParams['Jenkins-Crumb'] = jenkinsCrumb;

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Disable a job
        * @param name Name of the job
        * @param jenkinsCrumb CSRF protection token
        */
    public postJobDisable (name: string, jenkinsCrumb?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/job/{name}/disable'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling postJobDisable.');
        }
        headerParams['Jenkins-Crumb'] = jenkinsCrumb;

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Enable a job
        * @param name Name of the job
        * @param jenkinsCrumb CSRF protection token
        */
    public postJobEnable (name: string, jenkinsCrumb?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/job/{name}/enable'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling postJobEnable.');
        }
        headerParams['Jenkins-Crumb'] = jenkinsCrumb;

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Stop a job
        * @param name Name of the job
        * @param jenkinsCrumb CSRF protection token
        */
    public postJobLastBuildStop (name: string, jenkinsCrumb?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/job/{name}/lastBuild/stop'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling postJobLastBuildStop.');
        }
        headerParams['Jenkins-Crumb'] = jenkinsCrumb;

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
                                    params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
    /**
        * 
        * Update view configuration
        * @param name Name of the view
        * @param body View configuration in config.xml format
        * @param jenkinsCrumb CSRF protection token
        */
    public postViewConfig (name: string, body: string, jenkinsCrumb?: string, extraHttpRequestParams?: any ) : ng.IHttpPromise<{}> {
        const localVarPath = this.basePath + '/view/{name}/config.xml'
            .replace('{' + 'name' + '}', String(name));

        let queryParameters: any = {};
        let headerParams: any = (<any>Object).assign({}, this.defaultHeaders);
        // verify required parameter 'name' is not null or undefined
        if (name === null || name === undefined) {
            throw new Error('Required parameter name was null or undefined when calling postViewConfig.');
        }
        // verify required parameter 'body' is not null or undefined
        if (body === null || body === undefined) {
            throw new Error('Required parameter body was null or undefined when calling postViewConfig.');
        }
        headerParams['Jenkins-Crumb'] = jenkinsCrumb;

        let httpRequestParams: ng.IRequestConfig = {
            method: 'POST',
            url: localVarPath,
            data: body,
                        params: queryParameters,
            headers: headerParams
        };

        if (extraHttpRequestParams) {
            httpRequestParams = (<any>Object).assign(httpRequestParams, extraHttpRequestParams);
        }

        return this.$http(httpRequestParams);
    }
}
