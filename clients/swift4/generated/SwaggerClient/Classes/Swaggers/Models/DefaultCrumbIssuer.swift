//
// DefaultCrumbIssuer.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class DefaultCrumbIssuer: Codable {

    public var _class: String?
    public var crumb: String?
    public var crumbRequestField: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _class = "_class"
        case crumb = "crumb"
        case crumbRequestField = "crumbRequestField"
    }

}