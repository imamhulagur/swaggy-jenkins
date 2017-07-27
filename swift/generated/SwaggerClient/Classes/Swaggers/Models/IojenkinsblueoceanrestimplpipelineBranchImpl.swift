//
// IojenkinsblueoceanrestimplpipelineBranchImpl.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class IojenkinsblueoceanrestimplpipelineBranchImpl: JSONEncodable {
    public var _class: String?
    public var displayName: String?
    public var estimatedDurationInMillis: Int32?
    public var fullDisplayName: String?
    public var fullName: String?
    public var name: String?
    public var organization: String?
    public var parameters: [HudsonmodelStringParameterDefinition]?
    public var permissions: IojenkinsblueoceanrestimplpipelineBranchImplPermissions?
    public var weatherScore: Int32?
    public var pullRequest: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["displayName"] = self.displayName
        nillableDictionary["estimatedDurationInMillis"] = self.estimatedDurationInMillis?.encodeToJSON()
        nillableDictionary["fullDisplayName"] = self.fullDisplayName
        nillableDictionary["fullName"] = self.fullName
        nillableDictionary["name"] = self.name
        nillableDictionary["organization"] = self.organization
        nillableDictionary["parameters"] = self.parameters?.encodeToJSON()
        nillableDictionary["permissions"] = self.permissions?.encodeToJSON()
        nillableDictionary["weatherScore"] = self.weatherScore?.encodeToJSON()
        nillableDictionary["pullRequest"] = self.pullRequest
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
