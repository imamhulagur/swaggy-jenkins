//
// IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map: JSONEncodable {

    public var ioJenkinsBlueoceanServiceEmbeddedRestPipelineImpl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl?
    public var ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["io.jenkins.blueocean.service.embedded.rest.PipelineImpl"] = self.ioJenkinsBlueoceanServiceEmbeddedRestPipelineImpl?.encodeToJSON()
        nillableDictionary["io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"] = self.ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl?.encodeToJSON()
        nillableDictionary["_class"] = self._class

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
